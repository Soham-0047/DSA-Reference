#include<iostream>
#include<vector>
using namespace std;



    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(0, nums, curr, ans);
        return ans;
    }
};

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

    cout<<(1<<2)<<endl;
    printList(vec);

    return 0;
}