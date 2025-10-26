#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of a String : ";
    cin>>n;
    char str[n];
    cout<<"Enter String : ";
    cin>>str;
    cout<<str<<endl;
    for(int i = 0;i<n;i++){
        if(i%2==0) str[i] = 'a';
    }

    cout<<str;
}