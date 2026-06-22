#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int recur(int n){
    if(n<=1) return 1;
    return n * recur(n-1);
}

int eval(vector<string>&s){
    stack<int>st;
    for(auto token : s){

        if(token == "+" || token == "-" ||  token == "/" || token == "*"){
          int a = st.top();
          st.pop();
          int b = st.top();
          st.pop();
          if(token == "+") st.push(b+a);
          else if(token == "-") st.push(b-a);
          else if(token == "*") st.push(b*a);
          else st.push(b/a);
        } else {
            st.push(stoi(token));
        }
    }
    return st.top();
}

/*
s = []
2
1
1, 2 -> 1+2  ->  3

3
3

3*3 = 9
*/
int main(){
    // int r =  recur(5);
    // cout<<r<<endl;
    vector<string>tokens;
    tokens = {"2","1","+","3","*"};
    // (2+1) * 3 => 9
    cout<<eval(tokens)<<endl;
    return 0;
}