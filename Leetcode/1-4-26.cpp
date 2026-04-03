#include<iostream>
#include<vector>
using namespace std;

// 1,2,3 -> 1,2,3, []

void recursiveSubset(vector<int>&v,vector<int>ans,int i){
    int n = v.size();
    if(i==n){
        if(ans.size() < 1){
            cout<<"[]"<<endl;
        }
        for(auto j:ans){
            cout<<j<<" ";
        }
        cout<<" || Size"<<ans.size()<<"|| "<<endl;
        return;
    }

    ans.push_back(v[i]);
    recursiveSubset(v,ans,i+1);
    ans.pop_back();
    recursiveSubset(v,ans,i+1);

}

// Subset 2
void recursiveSubset2(vector<int>&v,vector<int>&ans,int i){
    int j 
}

void printList(vector<vector<int>>&vec){
    for(auto i : vec){
        for(auto j : i) {
            cout << j << " ";
        }
    }
}
int main(){
    // 0001 ->    1 x 2^0 +  0 x 2^1 + 0 X 2^2 ...
    // 0010
    vector<vector<int>>vec;
    // For example currently we have array
    vector<int>arr = {1,2,3};

    // cout<<(1<<2)<<endl;
    // printList(vec);

    vector<int>ans;
    recursiveSubset(arr,ans,0);


    return 0;
}