#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> d){
    for(int i =0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

}

void reverse(vector <int>& a){

    for(int i =0,j=a.size()-1;i<j;i++,j--){
        int temp = a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    return;
    
}

void reversepart(vector <int>& v ,int i,int j){
    for(i,j; i<j; i++,j--){
        int temp = v[j];
        v[j]=v[i];
        v[i]=temp;
    }

    return ;


}
int main(){

    //-----------------Rotate Vector-------------

    vector <int>v;
    v.push_back(1);
    v.push_back(2);
   
    display( v);
  

    cout<<"Enter Number of rotation : ";
    int r;
    cin>>r;
    // if(r>v.size()-1)  r = r%v.size()-1;
    reverse(v);
    reversepart(v,r,v.size()-1);
    reversepart(v,0,r-1);
   
    

    display(v);

}