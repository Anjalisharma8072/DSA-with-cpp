#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v ;
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);
    int x = 9;
    int a = 1;
    for(int i =0;i<=v.size()-2;i++){
        for(int j =i+1;j<v.size();j++){
            if(v[i]+v[j] == x){
                cout<<i<<" "<<j<<endl;
            }
         
        }
        a++;
   
    }


}