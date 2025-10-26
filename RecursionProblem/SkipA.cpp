#include <iostream>
#include <vector>
using namespace std;

//Remove Character from a String

string removeA(int i , string str,string result){
    if(i>str.size()-1){
        return result;
    }
    if(str[i]=='a' || str[i]=='A'){
        return removeA(i+1,str,result);
    }
    return removeA(i+1,str,result+str[i]);

}


//Remove Number from array

void RemoveNumber(int i,vector <int> &v ){
    if(i==v.size()) return;
    if(v[i]!=1){
        cout<<v[i]<<" ";
        return RemoveNumber(i+1,v);
    }
    return RemoveNumber(i+1,v);
}
int main(){
    // cout<<removeA(0,"Anjali Sharma","");

    vector <int>v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(1);
    v.push_back(3);

    RemoveNumber(0,v);
}