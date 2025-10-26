#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;






int main(){

    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(7);
    int k = 3;
    int x = 7;
    vector<int>v;
    int n = arr.size();
    int lo = 0;
    int hi = arr.size()-1;
    int idx = -1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            idx=mid;
            // cout<<mid;
            flag = true;
            break;
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }

    int lb;
    int ub;
    if(flag==true){
        lb=idx-1;
        ub=idx+1;
        v.push_back(x);
    }else{
        lb = hi;
        ub = lo;
    }

    
    while(v.size()<k){
        if(ub>n-1){
            v.push_back(arr[lb]);
            lb--;
        }
        else if(lb<0){
            v.push_back(arr[ub]);
            ub++;
        }
        else if((x-arr[lb])<=(-(x-arr[ub]))){
            v.push_back(arr[lb]);
            lb--;
        }else{
            v.push_back(arr[ub]);
            ub++;
        }
    }


    // sort(v.begin(),v.end());

    for(int i = 0;i<k;i++){
        cout<<v[i]<<endl;

    }


}