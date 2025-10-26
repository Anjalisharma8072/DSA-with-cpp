#include <iostream>
#include <vector>
using namespace std;

bool check(int mid,vector<int>& piles, int h){
    int count = 0;
    for(int bananas : piles){
        count+=(bananas+mid -1)/mid;
    }
    if(count<=h) return true;
    else return false;
}





int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int max = 0;
    int speed = -1;
    for(int i = 0;i<n;i++){
        if(piles[i]>max) max = piles[i];
    }
    int lo = 1;
    int hi = max;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(check(mid,piles,h)==true){
        speed=mid;
        hi=mid-1;
    }else lo=mid+1;
   
    }
  
    return speed;
    
        
}






int main(){

    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(11);
    
    cout<<minEatingSpeed(v,8)<<endl;
   
}