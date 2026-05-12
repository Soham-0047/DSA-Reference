#include<iostream>
#include<vector>
using namespace std;


vector<int> ReturnSeparateNumberArray(vector<int>&num){
    vector<int> ans;
    for(int i=0;i<num.size();i++){
        int n = num[i];
        while(n){
            int rem = n%10;
            ans.push_back(rem);
            n /= 10;
        }
    }
    return ans;

}


void printList(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int>arr = {13,25,83,77};
    vector<int> ans = ReturnSeparateNumberArray(arr);
    printList(ans);
    return 0;
}
