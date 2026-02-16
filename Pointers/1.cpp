#include <iostream>
using namespace std;

int main() {
    int i = 33;
    int *p = &i; //This is called pointer

    cout<<sizeof(i)<<" "<<sizeof(*p)<<" "<<sizeof(p)<<" "<<*p<<" "<<i<<" "<<p<<" "<<endl;
    

    return 0;
}