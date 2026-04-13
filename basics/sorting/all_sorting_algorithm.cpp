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
// T.C= O(n^2) and best case (n)  and S.C = O(1) Stable
void insertion_sort(vector<int>&v){
    int n = v.size();
    for(int i=1; i<n;i++){
        int k = v[i];  //key value
        int j = i-1;  //previous index
        while(j>=0 && v[j] > k){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] =k;
    }
}

// Selection sort
// T.c = O(n^2) and S.C = O(1)
void selection_sort(vector<int>&v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        int min_in = i;

        for(int j=i+1;j<n;j++){
            if(v[j] < v[min_in]) min_in = j;
        }
        swap(v[i],v[min_in]);
    }
}


// Merege Sort
// T.C:  O(nlogn) and space complexity: O(n)
void merge(vector<int>&v,int l,int m,int r){

    int n1 = m-l+1;
    int n2 = r-m;

    int *a = new int[n1];
    int *b = new int[n2];

    for(int i=0;i<n1;i++){
        a[i] = v[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[m+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            v[k]= a[i];
            i++;
        }else{
            v[k] = b[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        v[k] = a[i];
        i++;
        k++;
    }

    while(j<n2){
        v[k] = b[j];
        j++;
        k++;
    }

    delete[] a;
    delete[] b;

}

void mergeSort(vector<int>&v,int l, int r){
    if(l>=r) return;

    int mid = l + (r-l)/2;

    mergeSort(v,l,mid);
    mergeSort(v,mid+1,r);
    merge(v,l,mid,r);
}


// Quick sort


// print the list
void vp(vector<int>&v)
{
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int> v = {64,7,70,12,90,3};
    int n = v.size();
    // bubbleSort(v);
    // insertion_sort(v);
    // mergeSort(v,0,n-1);

    vp(v);
    return 0;
}