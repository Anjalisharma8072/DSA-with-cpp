#include <iostream>
#include <vector>
using namespace std;

void seq(vector<int>& v, int k, vector<int>& ans, vector<vector<int>>& finalans, int start) {
    // Base case
    if (ans.size() == k) {
        finalans.push_back(ans);
        return;
    }

    // Recursive case
    for (int i = start; i < v.size(); ++i) {
        ans.push_back(v[i]);
        seq(v, k, ans, finalans, i + 1);
        ans.pop_back();  // Backtrack
    }
}



void seq2(int arr[],vector <int> ans,int n, int idx,int k ){
    if(idx==n){
        if(ans.size()==k){
            for(int i = 0 ;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
        
        seq2(arr,ans,n,idx+1,k);
        ans.push_back(arr[idx]);
        seq2(arr,ans,n,idx+1,k);
}

int main(){
    vector <int>v;
    // v.push_back(1);
    //  v.push_back(2);
    //   v.push_back(3);
    // vector<int>ans;
    // vector<vector <int>> finalans;
    // seq(v,1,ans,finalans,0);

    //   for (int i = 0; i < finalans.size(); ++i) {
    //     for (int j = 0; j < finalans[i].size(); ++j) {
    //         cout << finalans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    seq2(arr,v,n,0,k);

   
}