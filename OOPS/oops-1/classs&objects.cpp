#include <iostream>
using namespace std;

//class

class Player{
    public:
    int score;      //data members
    int health;
};

class Calcualtor{
    private:             //access modifiers (public , private and protected)
    int a=1,b=2;

    public:
    void add(){         //Function members
        cout<<a+b;
    };
    void sub(){
        cout<<a-b;
    }
    void multiply(){
        cout<<a*b;
    }
    void divide(){
        cout<<a/b;
    }
};

int main(){

//object

    // Player Anjali;
    // Anjali.health = 100;
    // Anjali.score = 90;
    // cout<<Anjali.health<<endl;
    // cout<<Anjali.score<<endl;

    Calcualtor calci;
    // calci.a = 10;
    // calci.b = 20;
    calci.add();
    cout<<endl;
    calci.sub();
    cout<<endl;
    calci.multiply();
    cout<<endl;
    calci.divide();


}