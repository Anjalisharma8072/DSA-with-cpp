#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int>v;

    for(int i =0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
     int last = -1;
    // for(int i =0;i<5;i++){
    //     if(n==v.at(i)) last = i;
        
    // }

    // cout<<last;


    // time efficicent code-------------------------------

     for(int i =4;i>=0;i--){
        if(n==v.at(i)){
            last = i;
            break;
        }

        
       
        
    }
    cout<<last;


}