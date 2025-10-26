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

 int trap(vector<int>& height) {
    if (height.size() < 3) return 0;
        
        //Previous greatest integer
        vector<int>v1(height.size());
       
        int max1= 0;
        for(int i  = 0;i<=height.size()-1;i++){
            v1[i] = max1;
            if(height[i]>max1){
                max1 = height[i];
            }
        }

        //Next Greatest Integer
        vector<int>v2(height.size());
  
        int max2 = 0;
        for(int i  = height.size()-1;i>=0;i--){
            v2[i] = max2;
            if(height[i]>max2){
                max2 = height[i];
            }
        }
        int water=0;

        for(int i  = 1;i<=height.size()-1;i++){
            int a = min(v1[i],v2[i]);
            if(height[i]<a){
                int j = a-height[i];
                water=water+j;
              
            }
        }

        return water;

        
    }

int main(){
    vector <int> v;
    vector <int> v1;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);

   
   cout<<trap(v);




    




}