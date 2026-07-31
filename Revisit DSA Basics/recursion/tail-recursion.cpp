#include<iostream>
using namespace std;


// Here it takes O(n) time complexity and O(1) space complexity
//Activation record created one
void loop_instead_tail_recursion(int n){
    while(n>0){
        cout<<n<<" ";
        n--;
    }

    cout<<"\n"<<endl;
}

// Activation recored , space complexity = O(N)
void tail_recursion(int n){

    if(n<=0) return;

    cout<<n<<" ";

    tail_recursion(n-1);

    cout<<"\n"<<endl;
}

// head recusrion

void loop_instead_head_recursion(int n){
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }

    cout<<"\n"<<endl;
}

void head_recursion(int n){

    if(n<=0) return;

    head_recursion(n-1);

    cout<<n<<" ";
}

// tree recusrion
void tree_recursion(int n ){
    if(n>0){
        cout<<n<<" ";
        tree_recursion(n-1);
        tree_recursion(n-1);
    }
}


// Boyer morre algorithm

int maj(vector<int>&v){

    int n=  v.size();

    int element = 0;
    int ref = 0;

    for(int i=0;i<n;i++){
        if(ref == 0){
            element = v[i];
        }

        ref += (element == v[i]) ? 1 : -1;
    }
    return element;
}

// tree recusrion example : version 2
void tree_recursion_v2(int n){
    if(n>0){
        cout<<n<<" ";
        tree_recursion_v2(n-1);
        tree_recursion_v2(n-1);
    }
}

void fnA(int n);
void fnB(int n);

void fnB(int n){
    if(n>1){
        cout<<n<<" ";
        fnA(n/2);
    }
}
void fnA(int n){
    if(n>0){
        cout<<n<<" ";
        fnB(n-1);
    }
}

int  nested_recusrsion(int n){
    if(n>100){
        return n-10;
    }else {
        return nested_recusrsion(nested_recusrsion(n+11));
    }
}
int main(){

    // loop_instead_tail_recursion(5);

    // tail_recursion(5);

    // loop_instead_head_recursion(5);

    // head_recursion(5);

    // tree_recursion(3);

    vector<int> v = {3,5,6,3,5,3};

    // unordered_map<int,int>mp;

    // for(int i=0;i<v.size();i++){
    //     mp[v[i]]++;
    // }

    // for(auto i: mp){
    //     cout<<i.first <<" "<<i.second<<endl;
    // }

    // int n  = maj(v);
    // cout<<n<<endl;

    // tree_recursion_v2(3);
    // fnA(10);

    // Nested recusrsion explae
    int output =  nested_recusrsion(15);
    cout<<output<<endl;


    return 0;
}