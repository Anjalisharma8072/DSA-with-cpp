#include <iostream>
using namespace std;

int main(){



    int arr[] = {1,2,2,3,3,3,3,8,18,18,52};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    int lo = 0;
    int hi = n-1;
    int firstocc;
    int lastocc;
    bool flag = false;

    //my code--------
    
    // while(lo<=hi){
    //     int mid = lo+(hi-lo)/2;
    //     if(arr[mid]==target){
    //         firstocc=mid;
    //         flag = true;
    //         hi=mid-1;
    //         lo = mid-1;
    //     }
    //     else if(arr[mid]<target){
    //         lo=mid+1;
    //     }
    //     else hi=mid-1;
    // }

    // if(flag==true) cout<<firstocc;
    // else cout<<-1;


//pw code--------------

    //   while(lo<=hi){
    //     int mid = lo+(hi-lo)/2;
    //     if(arr[mid]==target){
    //         if(arr[mid-1]!=target){
    //             cout<<mid<<endl;
    //             flag = true;
    //             break;
    //         }else{
    //             hi = mid-1;
    //         }
    //     }
    //     else if(arr[mid]<target){
    //         lo=mid+1;
    //     }
    //     else hi=mid-1;
    // }

    // if(flag==false) cout<<-1;


    
      while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid+1]==target){
                firstocc = mid;
                lo = mid+1;
            }else if(arr[mid-1]==target){
                lastocc = mid;
                hi=mid-1;
            }
            flag = true;
        }
        else if(arr[mid]<target){
            lo=mid+1;
        }
    }

    if(flag==false) cout<<-1;
    else{
        cout<<firstocc<<" "<<lastocc;
    }
   
   


   
}