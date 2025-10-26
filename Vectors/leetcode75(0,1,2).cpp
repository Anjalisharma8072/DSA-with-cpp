#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> d){
    for(int i =0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

}

//---------Dutch flag algorithm or one pass-------------------------

void sort(vector <int>& nums){
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    while(mid<=high){
        if(nums[mid]==2){
            int temp = nums[high];
            nums[high] = nums[mid];
            nums[mid] = temp;
            high--;

        }
        else if(nums[mid]==0){
            int temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;

        }
        else if(nums[mid]==1){
            mid++;
        }
    }
   
}

int main(){

    vector <int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
  
   
    display(v);
    sort(v);
    display(v);
  

  //-----------------------Two pass-------------------
    // int num0 = 0,num1 = 0,num2 = 0;

    // for(int i =0;i<v.size();i++){
    //     if(v[i]==0) num0++;
    //     else if(v[i]==1) num1++;
    //     else num2++;
    // }

    

    // for(int i =0;i<v.size();i++){
    //      if(i<num0) v[i] = 0;
    //      else if(i<num0+num1 ) v[i]=1;
    //      else  v[i]=2;
    // }

    // display(v);
    



}