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

int main(){

    loop_instead_tail_recursion(5);

    tail_recursion(5);

    loop_instead_head_recursion(5);

    head_recursion(5);

    return 0;
}