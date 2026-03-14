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
int main(){

    vector<int>v = {23,4,12,90,55,2,45};
    cout<<max_element(v)<<endl;


    return 0;
}