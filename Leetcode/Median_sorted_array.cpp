#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>&v, int target){
    int left = 0;
    int right = v.size() - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(v[mid] == target){
            return mid;
        } else if (v[mid] < target){
            left =  mid + 1;
        } else {
            right  = mid -1;
        }
    }
    return -1;
}

// Finding the lower bound element >= target
// int lowerBound(vector<int>&v, int target){
//     int left =0;
//     int right = v.size();

//     while(left < right){
//         int mid = left + (right - left)/ 2;

//         if()
//     }
// }

void printList(vector<int>&v1){
    for(auto i : v1){
        cout<<i<<" ";
    }
}

int main(){

    vector<int>v = {44,223,556,22,909,123,90};
    // 123
    // printList(v);
    cout<<binarySearch(v,123);

    return 0;
}