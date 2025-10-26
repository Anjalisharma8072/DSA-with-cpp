#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> d){
    for(int i =0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

}

 void nextPermutation(vector<int>& nums) {
    //find pivot or index
    int pivot = -1;
    int n  = nums.size();
    for(int i  = n-2;i>=0;i--){
        if(nums[i]<nums[i+1]) {
            pivot = i;
            break;
        }
    }
    
    //if the greatest combination is already given
    if(pivot==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    
    //reverse pivot+1 to end values
   
       reverse(nums.begin()+pivot+1,nums.end());
    
    int a ;
    //finding number which is just greater than pivot
    for(int i  = pivot+1;i<n;i++){
        if(nums[i]>nums[pivot]){
           a = i;
           break;
        }
    }
    int temp = nums[a];
    nums[a] = nums[pivot];
    nums[pivot] = temp;

}
        

int main(){
    vector <int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    display(v);
    nextPermutation(v);
    display(v);
}

