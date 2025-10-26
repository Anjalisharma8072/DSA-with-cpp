#include <iostream>
using namespace std;


class Student{

    public:

    int age , rollno;

    //constructor overloading
    Student(int a , int r): age(a), rollno(r){};
    Student(int a):age(a),rollno(67){};
    Student():age(34),rollno(35){};
};



//Function Overloading

void CalculateArea(int l , int b){
    cout<<l*b<<endl;
}

void CalculateArea(double l , double b){
        cout<<l+b<<endl;
}

void CalculateArea(int s){
    cout<<s*s<<endl;
}
int main(){

    Student yamini(24);
    cout<<yamini.age<<endl;
    cout<<yamini.rollno<<endl;

    // CalculateArea(2,3);
    // CalculateArea(4.2,5.6);
    // CalculateArea(4);

    



}
