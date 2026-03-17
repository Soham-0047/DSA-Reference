#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



// suppose if we want to find the max element in array
int max_element(vector<int>&v){
    int n = v.size();
    int max = v[0];
    for(int j=0;j<n;j++){
        if(v[j] > max) max = v[j]; //O(n)
    }
    return max;
}


vector<int> exclusiveTime(int n, vector<string>& logs){
    vector<int> res(n,0);
    stack<int>st;

    for(string s : logs){
        
    }
}

int main(){

    // vector<int>v = {23,4,12,90,55,2,45};
    // cout<<max_element(v)<<endl;
    string log = "1:start:5";
                //012345678
    int a = log.find(":");
    int b = log.find(":",a+1);
    int id = stoi(log.substr(0,a));
    string msg = log.substr(a+1,b-a-1);
    int time = stoi(log.substr(b+1));

    cout<<log.substr(0,4)<<endl;



    return 0;
}