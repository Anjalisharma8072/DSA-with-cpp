#include <iostream>
using namespace std;

class Bike{
public:

    int tyreSize;

    //Default constructor

    Bike (){
        cout<<"Default constructor is called!"<<endl;
    }

    // Parameterized constructor

    Bike(int tyreSize){
        this->tyreSize = tyreSize;
        cout<<tyreSize<<endl;
    }
};

int main(){

    Bike honda;
    Bike tvs;
    Bike royal(2);

}