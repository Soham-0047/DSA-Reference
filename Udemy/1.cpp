#include <iostream>
using namespace std;


void recur_fun(int n){

    if(n>0){
        cout<<n<<" ";
        recur_fun(n-1);
    }
}

int recur_sum_funn(int n){
    if(n>0){
        int tr = recur_sum_funn(n-1) + n;
        cout<<tr<<" ";
        return tr;
    }
    return 0;
}
void printArray(int *p)
{
    int n = sizeof(p[0]) / sizeof(p);
    cout << n << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }
}

/*
Activaton Record:

    f(5)

    f(4) + _ = 10+5 = 15

    f(3) + _ = 6+4 = 10

    f(2) + _ = 3 + 3 = 6

    f(1) + _2 = 3

    f(0) + _1 = 1



*/
int main()
{

    // int *p = new int[10];
    // printArray(p);
    // delete[] p;
    // p = nullptr;
    // recur_fun(12);
    recur_sum_funn(5);
}