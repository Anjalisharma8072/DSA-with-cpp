#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> d){
    for(int i =0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

}

void sort(vector <int>& v){
    int noz = 0;
    int noo = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]==1) noo++;
        else noz++;

    }

    for(int i =0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }

}

void sortOnepass(vector <int>& v){
    int i = 0;
    int j  = v.size()-1;
    while(i<j){
        if(v[i]>v[j]){
            v[j] =1;
            v[i] = 0;
        }
        i++;
        j--;
    }
}


void pwsort(vector <int>& v){
    int i = 0;
    int j  = v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j] ==1 )j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i] =0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main(){
    vector <int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1); 
    display(v);
    pwsort(v);
    display(v);







}