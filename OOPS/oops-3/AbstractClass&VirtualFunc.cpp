#include <iostream>
using namespace std;


class Animal{
public:
    Animal(){
        cout<<"Hi i am animal constructor"<<endl;
    }
    virtual void sound() = 0;           // pure virtual function
};

class Cat : public Animal{
    public:
    void sound(){
        cout<<"meow!meow!"<<endl;
    }
};

int main(){
    Animal *a;
    Cat c;
    a = &c;
    a->sound();



}