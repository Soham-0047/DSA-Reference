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

void merge(vector<int>&v, int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r - (m+1) + 1;
    vector<int> L(n1), R(n2); //created tmp array
    for(int i = 0; i<n1;i++) L[i] = v[l+i]; //left half of median
    for(int j=0; j<n2;j++) R[j] = v[m+1+j]; //right half of median

    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            v[k] = L[i];
            i++;
        }else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1) v[k++] = L[i++];
    while(j<n2) v[k++] = R[j++];
}

void mergeSort(vector<int>&v, int l, int r){
    if(l>=r) return;
    int m = l + (r - l) /2; //median of the array
    mergeSort(v,l,m);
    mergeSort(v,m+1,r);
    merge(v,l,m,r);

}

int main(){

    // vector<int>v = {44,223,556,22,909,123,90};
    // 123
    // printList(v);
    // cout<<binarySearch(v,123);
    vector<int>v1 = {34,56,12,4,20,45};
    vector<int>v2 = {8,55,89,90};
    int l = 0;
    int r = v1.size()-1;
    mergeSort(v1,l,r);
    printList(v1);

    return 0;
}