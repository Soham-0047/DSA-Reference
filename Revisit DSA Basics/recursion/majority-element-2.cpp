#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// find all elements that appear more than once
vector<int> findmajorit2(vector<int>&v){
    int n = v.size();
    unordered_map<int,int>mp;
    vector<int>tmp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(const auto &i : mp){
        if(i.second > n/3){
            tmp.push_back(i.first);
        }
    }

    return tmp;
}

void print(vector<int>&v){

    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}


//version-2 optimized technique
/*
1 2 1 1 1 2 1

n = 7

1 -> 5, 2 -> 2

1-2 ->  x, 1-2 -> x

*/

// Majority element v2 using boyee more

// we have to return the list of elements that appear more than n/3 times

vector<int> maj_v(vector<int>&v){
    int cand1 = 0, cand2 = 1;
    int count1 = 0,  count2 = 0;

    for(int num : v){
        
    }

}
int main(){
    vector<int>arr = {3,2,6,2,6,3,2,3,7,3};
    vector<int>tm = findmajorit2(arr);
    print(tm);


    return 0;
}