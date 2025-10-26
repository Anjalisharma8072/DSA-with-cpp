#include <iostream>
using namespace std;


class ComplexNumber{
    public:
    int imaginary;
    int real;

    ComplexNumber operator +(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;   // (4+2):this-> part of first imaginary and c1.imag = part of second
        c3.real = c1.real + this->real;
        return c3;
    }

};

int main(){

    ComplexNumber a1,a2;
    a1.real = 10;
    a1.imaginary = 2;
    a2.real = 23;
    a2.imaginary = 4;
    ComplexNumber a3 = a1+a2;
    cout<<a3.real<<" "<<a3.imaginary;

}