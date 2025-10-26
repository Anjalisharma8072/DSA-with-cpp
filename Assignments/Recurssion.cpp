#include <iostream>
#include <vector>
using namespace std;



//Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.


int odd(int a,int b){
    if(a>b) return 0;
    if(a%2!=0 ) {
       return a+ odd(a+1,b);
    
      
    }
    return odd(a+1,b);


}

//Given a positive integer, return true if it is a power of 2.

int pow2(int n){
    if(n==1) return true;
    if(n%2!=0 || n==0) return false;

    return pow2(n/2);
}


//Print all the elements of an array in reverse order.

void Reverse(int a,int b,vector <int> &v){
    if(a>b) return;
    int temp = v[b];
    v[b]=v[a];
    v[a]=temp;
    return Reverse(a+1,b-1,v);


}

//Print index of a given element in an array. If not present, print -1.

int Index(int i ,int n ,vector <int> &v){
    if(i>v.size()-1) return -1;
    if(n==v[i]) return i;
    return Index(i+1,n,v);
}

//Q4. Given an array of integers, print a sum triangle using recursion from it----?

void ArrayTriangle(vector<int> &v,int i,int n){
    if(n==0) return;
    if(i>n-1) {
        cout<<endl;
        return ArrayTriangle(v,0,n-1);
    };
    cout<<v[i]<<" ";
    v[i]=v[i]+v[i+1];
    

    return ArrayTriangle(v,i+1,n);
    

}



int main(){
    // int a = odd(1,10);
    // cout<<pow2(500);
    vector <int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    // for(int i = 0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    
    // cout<<endl;

    // Reverse(0,v.size()-1,v);
    // for(int i = 0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }


    // cout<<Index(0,1,v);

   ArrayTriangle(v,0,5);
    // int n = v.size();
    // while(n!=0){

        
    //     for(int i =0;i<n;i++){
    //         cout<<v[i]<<" ";
    //     }
    //     cout<<endl;
    //     for(int i = 0;i<n-1;i++){
    //         v[i] = v[i]+v[i+1];
    //     }

    // n--;
    
  
    // }
        
   
 
    }
    
 








