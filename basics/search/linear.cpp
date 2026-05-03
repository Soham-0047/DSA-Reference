#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// linear search implementation

// Time complexity of linear search algorithm is O(n) and bvest case O(1)
int functionLinearSearch(vector<int>&v,int target){
    for(int i=0;i<v.size();i++){

        if(v[i] == target){
            return i+1;
            break;
        }
    }
    cout<<"Not found";
    return -1;
}

int main() {

    vector<int>v = {23,56,12,78,34,90};
    cout<<functionLinearSearch(v,34)<<endl;

    return 0;
}