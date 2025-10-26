#include <iostream>
using namespace std;
int main(){
    int n,x;
   cout<<"Enter Size of array : ";
   cin>>n;
   int arr[n];
   cout<<"Enter numbers : ";

   for(int i =0;i<=n-1;i++){
    cin>>arr[i];
   }

   cout<<"Enter a number : ";
   cin>>x;
   //check mark
    bool a = false;
    for(int i =0;i<=n-1;i++){
    if(arr[i]==x) a = true;
     
   }
   if (a==true )cout<<"Element is Present";
   else cout<<"Element is not Present";


}