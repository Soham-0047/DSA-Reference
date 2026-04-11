#include<iostream>
using namespace std;

// O(n^2) with S.C = (1)
void bubbleSort(vector<int>&v){
    int n = v.size();
    // Bubble Sort: Here we have two looops. Outer loop is for number of passes and inner loop is for comparing elements.
    for(int i=0;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}


// Insertion Sort


void vp(vector<int>&v)
{
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int> v = {64,7,70,12,90,3};
    bubbleSort(v);
    vp(v);
    return 0;
}