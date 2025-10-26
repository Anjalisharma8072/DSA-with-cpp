#include <iostream>
using namespace std;

class Student{
    public:
    int age;
    int rollno;

    //Initalizer List
    Student(int a,  int r): age(a) , rollno(r){};

};
int main(){

    Student anji(20,2205969);
    cout<<anji.age<<endl;
    cout<<anji.rollno<<endl;
    

}