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

double findMedianTwoSortedArray(vector<int>&v1,vector<int>&v2){
    int n1 =  v1.size();
    int n2 = v2.size();
    int i=0, j=0;
    vector<int>merge;
    while(i<n1 && j <n2){
        if(v1[i]<v2[j]) merge.push_back(v1[i++]);
        else merge.push_back(v2[j++]);
    }

    // For remainignelements 
    while(i<n1) merge.push_back(v1[i++]);
    while(j<n2) merge.push_back(v2[j++]);

    int n = merge.size();
    // printList(merge);
    if(n%2 == 1){
        return merge[n/2];
    } else {
        return merge[n/2-1] + merge[n/2] / 2.0;
    }
}

int main(){

    // vector<int>v = {44,223,556,22,909,123,90};
    // 123
    // printList(v);
    // cout<<binarySearch(v,123);
    vector<int>v1 = {34,56,12,4,20,45};
    vector<int>v2 = {8,55,89,90};
    int l = 0;
    int r1 = v1.size()-1;
    int r2 = v2.size()-1;
    mergeSort(v1,l,r1);
    mergeSort(v2,l,r2);
    // printList(v1);
    // Find median of two sorted array
    double md = findMedianTwoSortedArray(v1,v2);
    cout<<md<<" "<<endl;
    return 0;
}