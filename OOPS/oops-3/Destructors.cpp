#include <iostream>
using namespace std;

class Bike{
public:

    int tyreSize;

    //Default constructor

    Bike (){
        cout<<"Default constructor is called!"<<endl;
    }


    //Destructor
    
    ~ Bike(){
        cout<<"Destructor called!"<<endl;
    }

   
};

int main(){

    Bike honda;


    bool flag = true;
    if(flag) Bike royal;

    Bike tvs;
    

}