#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(5,7) ;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    
    for(int i =0;i<5;i++){
        cout<<v[i]<<" ";
    }
    

}