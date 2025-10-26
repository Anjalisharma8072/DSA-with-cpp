#include <iostream>
#include <vector>
using namespace std;


//Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.


void reverse(int n ,int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    reverse(n/10,(sum*10)+(n%10));
}

void sequence(vector <int> &v , vector<int> ans,vector <vector<int>> &result,int idx,int k){
    if(ans.size()==k){
        result.push_back(ans);
        for(int i = 0;i<result.size();i++){
            for(int j = 0;j<result.size();j++){
                 cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
      
        return;
    }

        sequence(v,ans,result,idx+1,k);
        ans.push_back(v[idx]);
        sequence(v,ans,result,idx+1,k);

}
int main(){
    // int n = 12000;
    // reverse(n,0);

    vector<int>original;
    int n = 5;
    for(int i = 1;i<=n;i++){
        original.push_back(i);
    }

    vector <int> ans;
    vector <vector<int>> result;
    int k = 3;
    sequence(original,ans,result,0,k);
 
    
}