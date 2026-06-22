#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



bool checkAnagram(string a, string b){
    if(a.length() != b.length()) return false;

    sort(a.begin(),a.end());
    sort(b.begin(), b.end());

    return a==b;
}


vector<vector<string>> anaGram(vector<string>&v){

    int n =  v.size();
    vector<bool>vis (n, false);

    vector<vector<string>>result;

    for(int i=0;i<n;i++){
        
        if(vis[i]) continue;

        vector<string>tmp;

        tmp.push_back(v[i]);

        vis[i] =  true;

        for(int j=i+1;j<n;j++){

            if(!vis[j] && checkAnagram(v[i], v[j])){
                tmp.push_back(v[j]);
                vis[j] =  true;
            }
        }

        result.push_back(tmp);
    }

    return result;
}

void print(vector<vector<string>>&v){
    for(auto i: v){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void printString(vector<string>&v){

    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    vector<string>arr = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>v = anaGram(arr);
    // print(v);
    vector<string> v1 = {"wat"};
    sort(v1[0].begin(), v1[0].end());
    printString(v1);

    return 0;
}
