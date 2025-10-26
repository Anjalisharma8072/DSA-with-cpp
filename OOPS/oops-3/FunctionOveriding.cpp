#include <iostream>
using namespace std;

class vehicle{
    public:
    int tyreSize;
    virtual void show(){
        cout<<"Vehicle a show()"<<endl;
    }
};

class Bike:public vehicle{
    public:
    int tyreWeight;
    void show(){                                
        cout<<"Bike ka show()"<<endl;
    }

};


int main(){

    vehicle *v;
    Bike honda;
    v = &honda;
    v->show();

    // honda.vehicle::show();      //access through resolution operator

}