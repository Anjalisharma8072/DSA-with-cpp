#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> d){
    for(int i =0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

}

void negpos(vector <int>& v){
    int i = 0;
    int j  = v.size()-1;
    while(i<j){
        if (v[i]<0 )i++;
        if(v[j]>0) j--;
        if(i>j)  break;
        if(v[i]>0 && v[j]<0){
            int temp  = v[j];
            v[j] = v[i];
            v[i] = temp;
            i++;
            j--;
        }

        
    }
  
}




int main(){
    vector <int>v;
    v.push_back(6);
    v.push_back(-2);
    v.push_back(5);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(-9); 
    display(v);
    negpos(v);
    display(v);







}