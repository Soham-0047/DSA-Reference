#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;



class c {

    public:
        int val;
        string nm = "This is the world of AI or Dev";
        
        void f1(){
            cout<<nm.substr(0,7);
        }

        void stackOperations(){
            stack<int>s;
            while(s.size() != 5){
                s.push(34);
            }

            while(!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }
        }

};
void print(vector<int>&v){
    cout<<"[ ";
    for(auto it  : v){
        cout<<it<<", ";
    }
    cout<<" ]";
    cout<<endl;
}

void print2D(vector<vector<int>>&v){

    for(int i=0;i<v.size();i++){

        for(int j =0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
}

int main(){

    vector<int>v = {34,56,56,56,56,22,45,23,8,6,56};
    // If we need to remove all the occurences of the 56
    // v.erase(remove())
    // v.erase(remove(v.begin(),v.end(),56), v.end()); //taken O(n)
    // print(v);

    // 2D vector
    // vector<vector<int>> v1(4, vector<int>(5,0));
    // print2D(v1);
 

    // Substring
    c obj1;
    obj1.f1();

    // stack
    obj1.stackOperations();



    return 0;
}