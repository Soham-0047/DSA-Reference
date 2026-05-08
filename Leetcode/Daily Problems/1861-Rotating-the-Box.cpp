#include<iostream>
#include<algorithm>
using namespace std;



vector<vector<char>> rotateTheBox(vector<vector<char>>&box){
    int m = box.size();
    int n = box[0].size();

    vector<vector<char>> ans(n,vector<char>(m,'.'));

    for(int i=0;i<m;i++){
        int em = n-1;
        for(int j=n-1;j>=0;j--){
            if(box[i][j] == '*'){
                em = j-1;
            } else if(box[i][j] == '#'){
                swap(box[i][j], box[i][em]);
                em--;
            }
        }
    }

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            ans[j][m-1-i] = box[i][j];
        }
    }
    return ans;
}

void printMatrix(vector<vector<char>> box){
    for(int i=0;i<box.size();i++){
        for(int j=0;j<box[0].size();j++){
            cout<<box[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    // nums = [4,3,2,1]
    vector<vector<char>> box = 
    {{'#','.','#'} , 
    {'#','#','*'} , 
    {'#','#','.'}};
    cout<<"Rotating matrix:"<<endl;
    printMatrix(box);

    vector<vector<char>> ans = rotateTheBox(box);
    cout<<"After rotating matrix:"<<endl;
    printMatrix(ans);
    // vector<vector<char>> twoDimentional(3, vector<char>(5,'.'));
    // printMatrix(twoDimentional);
    return 0;
}