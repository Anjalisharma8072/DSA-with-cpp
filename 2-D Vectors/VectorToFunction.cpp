#include <iostream>
#include <vector>
using namespace std;

void change( vector < vector <int> > &v){   //Not mandotory to define size
    v[1][1] = 500;
}

int main(){

    vector <int> v1;
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(8);

    vector <int> v2;
    v2.push_back(12);
    v2.push_back(42);
 
    // 2-D vectors
    
    vector< vector <int> > v ;
    v.push_back(v1);
    v.push_back(v2);

    cout<<v[1][1];
    change(v);
    cout<<v[1][1];


}

