#include <iostream>
using namespace std;
int main(){

    
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // for(int i = 0 ; i<n ; i++){
    //     cout<<"hello"<<endl;
    // }




    // -------------1to100-----------------
    // int i;
    // for(i=1;i<=100;i++){
    //     cout<<i<<endl;
    // }




    // ---------even number(1to100)-----------------
    // int i;
    // for(i=1;i<=100;i++){
    //     if(i%2==0) cout<<i<<endl;
        
    // }




    // ----------Table of 19---------------
    // int i;
    // int a=19;
    // for(i=1;i<=10;i++){
    //     cout<<19<<" "<<"X"<<" "<<i<<" "<<"="<<" "<<a*i<<endl;;
    // }

    // AP Series--------(1,3,5,7,9____)---------------------
    // int i,n;
    // cout<<"Enter Last number of series : ";
    // cin>>n;
    // int a=1;
    // for(i=1;i<=n;i+=1){
    //     cout<<a<<endl;
    //     a+=2;
    // }


    // GP Series--------------(1,2,4,8______)---------------
    // int i,n;
    // cout<<"Enter Last number of series : ";
    // cin>>n;
    // int a=1;
    // for(i=1;i<=n;i+=1){
    //     cout<<a<<endl;
    //     a*=2;
    // }



    // (100,97,94----- upto all positive --------)
    // Method - 1 (Maths)

    // int a= 100;
    // for (int i =1;i<=34;i++){
    //     cout<<a<<endl;
    //     a-=3;
    // }

    // Method-2----######
    // for(int i = 100;i>0;i-=3){
    //     cout<<i<<endl;
    // }





    // int i;
    // for(i=65;i<=90;i++){
    //     char a = (char)i;
    //     cout<<a<<" "<<i<<endl;
    // }



    // --------------------------Prime---------------------------

    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // bool flag = true;
    // for(int i =2;i<n;i++){
    //     if(n%i==0){
            
    //         flag=false;
    //         break;
            
    //     }
    // }
    // if(n==1 || n==0) cout<<"Not prime";
    // else if (flag==false) cout<<"Not Prime";
    // else cout<<"Prime";


    //  -----------count Digit-------------------
    // cout<<"Enter a number : ";
    // int n,count;
    // cin>>n;
    // count = 0;
    // int a = n;
    // while(n>0){
    //     n=n/10;
    //     count++;
    // }
    // if(a==0) cout<<1;
    // else cout<<count;



    // --------------Sum of Digits------------------
    // cout<<"Enter a number : ";
    // int sum,n;
    // cin>>n;
    // sum=0;
    // while(n>0){
    //     int rem = n%10;
    //     sum+=rem;
    //     n/=10;
    // }
    // cout<<sum;


    // ------------Reverse of a number------------
    // cout<<"Enter a number : ";
    // int n,reverse;
    // cin>>n;
    // reverse=0;
    // while(n>0){
    //     int rem = n%10;
    //     reverse=(reverse*10)+rem;
    //     n/=10;
    // }

    // cout<<reverse;



    // sum of series(1-2+3-4+5-6---------n)-------------------
    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // int sum = 0;
    // for(int i= 1; i<=n;i++){
    //     if(i%2==0) sum-=i;
    //     else sum+=i;
    // }

    // cout<<sum;


    // ----------------Method2(without Loop)-----------
    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // if(n%2==0) cout<<(-n/2);
    // else cout<<(-n/2+n);
   

    // Factorial of a number-------------
    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // int fact = 1;
    // while(n>0){
    //     fact*=n;
    //     n--;

    // }

    // cout<<fact;



    // --------Fibonacci Series-----------------
    // cout<<"Enter a number : ";
    // int n,a,b,sum;
    // cin>>n;
    // a=1;
    // b=1;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // sum=0;
    // for(int i=1;i<=(n-2);i++){
    //     sum=a+b;
    //     a=b;
    //     b=sum;
    //     cout<<b<<endl;
    // }

    


    // ----------Power--------------
    int a,b;
    float pow = 1;
    bool flag = true;
   
    cout<<"Enter a number and power : ";
    cin>>a>>b;
    if(b<0){
            flag=false;
            b=-b;
    }
    for(int i=1;i<=b;i++){
        pow*=a;
        
    }
    
   if(flag==false) {
    pow=1/pow;
   }
   if(a==0 && b==0) cout<<"Not Defined";

    else cout<<pow<<endl;
   
    



















}