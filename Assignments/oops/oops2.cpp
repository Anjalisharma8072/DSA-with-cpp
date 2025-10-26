#include <iostream>
#include <string>
using namespace std;


class Student{
public:
    string name;
    int rollno;
    string course;
    string dept;
    int yearOfJoining;

    static int StudentCount;
    static int deptCount;

    Student(string n , int r ,string c , string d , int y){
        name=n;
        rollno=r;
        course=c;
        dept= d;
        yearOfJoining = y;
        StudentCount++;
    }

    bool check(string d1,string d2){
        if(d1==d2) return true;
        else  return false;

    }
};
int Student::StudentCount=0;

int main(){
    Student d("anjali",2205969,"bvoc","science",2025);
    Student e("yash",2205547,"Msc","science",2025);
    cout<<d.check(d.dept,e.dept)<<endl;;
    cout<<d.StudentCount<<endl;

}