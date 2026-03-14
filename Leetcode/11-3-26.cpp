#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print(vector<int>&v){
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

unordered_map<int,int> pr(vector<int>&v){

    int n = v.size();
    vector<int>tmp(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int j=0;
    for(auto i:mp){
        if(i.first == v[j]){
            v.erase(v.begin()+j);
            j++;
        }
    }
    print(v);
    return mp;
}

vector<int>solve(vector<int>&v){
    int n =v.size();
    int k=0;
    int l = n-1;
    int count = 0;
    sort(v.begin(),v.end()); //2,2,3,3,4
    vector<int>tmp(n);
    for(int i=0;i<n;i++){
       if(i!=v[i]){
        tmp.push_back(i);
       }
    }
    return tmp;
}

void pmap(unordered_map<int,int>&mp){
    for(auto i : mp){
        cout<<i.first<<" -> "<<i.second;
        cout<<endl;
    }
}
int main(){
    vector<int> v = {2,4,2,3,2,3};
    vector<int> k = solve(v);
    print(k);
    // unordered_map<int,int>mp = pr(v);
    // pmap(mp);

    
}