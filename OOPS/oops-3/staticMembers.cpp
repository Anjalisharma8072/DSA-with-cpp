#include <iostream>
using namespace std;



class Bike{
    public:
    static int a ;      //members of class that is not related to object 
    int tyreSize;

    static void seta(){
        a++;
    }
};

// void print(){
//     static int a = 10;
//     cout<<a<<endl;
//     a++;


// };
int b  = 6;
int Bike::a = 11;       // :: resolution operator
int main(){

    Bike royal;
    Bike Honda;
    // royal.tyreSize = 10;
    // cout<<royal.tyreSize<<endl;
    cout<<::b<<endl;
    cout<<royal.a<<endl;
    cout<<Honda.a<<endl;
    Bike :: seta();
    cout<<royal.a<<endl;
    cout<<Honda.a<<endl;
  
 
   

}
