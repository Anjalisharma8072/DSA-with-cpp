#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter a number - ";
    // cin>>n;
    // int sum=0;
    // int product=1;
    // for(int i;n!=0;i++){
    //     int a = n%10;
    //     sum=sum+a;
    //     product = product *a;
    //     n = n/10;

    // }
    // cout<<"Sum is - "<<sum<<endl;
    // cout<<"Product is - "<<product<<endl;
    // cout<<"Difference is - "<<sum-product<<endl;

    // --------------------------------------------------------------------
   
    // int n;
    // cout<<"Enter a number - ";
    // cin>>n;
    // int count=0;
    // for(int i;n!=0;i++){
    //     if(n&1){
    //         count = count+1;
    //     }
    //     n=n>>1;
    // }
    // cout<<count;

    // ---------------FIBONACCI SERIES------------------------------------------

    // int a,b,n,c;
    // a=0;
    // b=1;

    // cout<<"Enter a number - ";
    // cin>>n;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // for(int i=1;i<=n;i++){
    //     c=a+b;
    //     cout<<c<<endl;
    //     a=b;
    //     b=c;

    // }

    // ---------------PRIME OR NOT--------------------------------------
    // int n;
    // cout<<"Enter a number - ";
    // cin>>n;
    // bool a=1;
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         a=0;
    //         break;

    //     }
    // }
    // if(a==0){
    //     cout<<"Not a prime";
    // }else{
    //     cout<<"prime";
    // }

    // ---------------------OUTPUT QUESTION----------------------

    // for(int i=0;i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }

    // for(int i=0;i<=5;i--){
    //      cout<<i<<" ";
    //      i++;
    //  }

    // for(int i=0;i<=15;i+=2){
    //     cout<<i<<" "<<endl;
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    // for(int i=0;i<5;i++){
    //     for(int j=i;j<=5;j++){
    //         if(i+j==10){
    //             break;

    //         }
    //         cout<<i<<"  "<<j<<endl;

    //     }
    // }

    // --------------------REVERSE INTEGER-----------------------------------
    // int n;
    // cout<<"Enter a number - ";
    // cin>>n;
    // int sum=0;
    // for(int i;n!=0;i++){
    //     int rem=n%10;
    //     sum=(sum*10)+rem;
    //     n=n/10;
    // }

    // cout<<"Reverse number is  - "<<sum;

    // ---------------------------------------------
    // int n,sum;
    // cout<<"Enter a number - ";
    // cin>>n;
    // sum=0;
    // for(int i=1;i<n;i++){
    //     if(n%i==0){
    //         sum=sum+i;

    //     }
    // }
    // if(sum==n){
    //     cout<<"Perfect number";
    // }else{
    //     cout<<"Not a perfect number";
    // }

    // --------------CONCATINATING SINGLE DIGITS-----------------------------------------
    // int a,b,c;
    // cout<<"Enter value of a - ";
    // cin>>a;
    // cout<<endl;
    // cout<<"Enter value of b - ";
    // cin>>b;
    // cout<<endl;
    // cout<<"Enter vlaue of c - ";
    // cin>>c;
    // cout<<endl;
    // int ans=a*100+b*10+c;
    // cout<<ans;

    // -----------------DECIMAL TO BINARY-----------------
    
    // int n;
    // cout << "Enter value of n - ";
    // cin >> n;
    // int ans = 0;
    // for (int i = 0; n != 0; i++)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n=n >> 1;
    // }
    // cout <<ans;


    // -----------------Binary to Decimal---------------------
    // int n;
    // cout<<"Enter a binary number - ";
    // cin>>n;
    // int sum=0;
    // for(int i=0;n!=0;i++){
    //     int rem=n%10;
    //     sum=sum+( rem*pow(2,i));
    //     n=n/10;

    // }

    // cout<<sum;

    // -------------------Negative number to decimal--------------
    // int n;
    // cout<<"Enter a number - ";
    // cin>>n;
    // int sum=0;
    // int bit =(~n);
    // bit++;
    // for(int i=0;n!=0;i++){
    //     int a=bit&1;
    //     sum=(a*pow(10,i))+sum;
    //     bit=bit>>1;
    // }
    // cout<<sum<<endl;
  

    // int a=5;
    // cout<<~a;
     
int n;
cout<<"Enter a number";
cin>>n;
int sum=0;
for(int i=0;n!=0;i++){
    int rem=n%10;
    sum=(sum*10)+rem;
    n=n/10;
}
cout<<sum;

    

 





   return 0;

}
