#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> finalPrices(vector<int>&prices){

    // 0 1 2 3 4
    // 8 4 6 2 3
    int n = prices.size();
    // vector<int>fp(n);
    // for(int i=0;i<n;i++){
    //     fp[i] = prices[i]; //default ones
    //     for(int j = i+1;j<n;j++){
    //         if(prices[j] <= prices[i]){
    //             fp[i] = (prices[i] - prices[j]);
    //             break;
    //         }
    //     }
    // }

    // Now using stack
    stack<int>st;
    vector<int>res = prices;
    for(int i=0;i<n;i++){
        while(!st.empty() && prices[st.top()] >= prices[i]) {res[st.top()] -= prices[i]; st.pop();}
        st.push(i);
    }


    return res ;
}

void print(vector<int>&v){
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>prices = {8,4,6,2,3};
    vector<int>ans = finalPrices(prices);
    print(ans);




    return  0;
}