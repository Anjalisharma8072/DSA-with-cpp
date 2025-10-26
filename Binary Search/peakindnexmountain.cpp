#include <iostream>
#include <vector>
using namespace std;



int peakIndexInMountainArray(vector<int>& arr) {
    int lo = 1;
    int hi = arr.size()-2;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if((arr[mid-1]<arr[mid]) && (arr[mid+1]<arr[mid])) return mid;
        else if(arr[mid+1]<arr[mid]) hi=mid-1;
        else lo=mid+1;
    }
    return -1;
}


int main(){
    vector<int>arr;
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(0);

    

    cout<<peakIndexInMountainArray(arr);

}