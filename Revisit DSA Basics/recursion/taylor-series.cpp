#include<iostream>
using namespace std;


int taylor_series(int x, int n){
    static int p =1 , f=1;

    int r;
    if(n==0){
        return 1;
    }else {
        r = taylor_series(x,n-1);
        p = p*x;
        f = f*n;

        return r + p/f;
    }
}


int main() {
    cout<<taylor_series(2,3)<<endl;

    return 0;
}