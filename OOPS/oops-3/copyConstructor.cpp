#include <iostream>
using namespace std;



class Student{
    public:
    string name;


    Student(string name){
        this->name = name;
        cout<<name<<endl;
    }

    Student(Student& s){        //call by reference
        name = s.name;
        cout<<name<<endl;
    }
};


int main(){


    Student t("anjali");
    Student t_copy(t);


}