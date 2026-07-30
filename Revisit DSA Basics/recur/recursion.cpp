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

int fact(int n){

    if(n<=0) return 1;

    return fact(n-1) * n;
}

int pow_function_v1(int m, int n){
    if(n<=0) return 1;

    return m * pow_function_v1(m,n-1);
}

int pow_function(int m, int n){

    if(n==0) return 1;

    if(n%2 == 0) return pow(m*m,n/2);

    else return m * pow(m*m, (n-1)/2);
}


int main(){
    // int r =  recur(5);
    // cout<<r<<endl;
    vector<string>tokens;
    // tokens = {"2","1","+","3","*"};
    // cout<<eval(tokens)<<endl;

    // cout<<fact(5)<<endl;

    cout<<pow_function(2,4)<<" \n" << pow_function_v1(2,4) <<endl;
    
    return 0;
}