#include <iostream>
using namespace std;

class Employe{
    public:
    int id;
    string name;
    int salary;
    static int avgSalary;
    static int employeCount;
    static int maxSalary;

    Employe(int id , string name,int salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
        avgSalary+=salary;
        employeCount++;
        maxSalary = max(maxSalary,salary);
    }

    void display(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<salary<<endl;
        cout<<"-------------------------------------"<<endl;
    }

    int maxsEsalary(){
        return maxSalary;
    }

    int avgWage(){
        return avgSalary/employeCount;
    }
};

int Employe::employeCount=0;
int Employe ::avgSalary = 0;
int Employe::maxSalary = 0;
int main(){

    Employe a(1,"anji",500000);
    Employe b(2,"eric",570000);
    Employe c(3,"sony",8790000);
    Employe d(4,"taxii",4560000);
    Employe e(5,"yasu",560000);

    //Display Details
    a.display();
    b.display();
    c.display();
    d.display();
    e.display();

    //avgSalary
    cout<<"-----------Average Salary------------"<<endl;
    cout<<a.avgWage()<<endl;

    //maxSalary
    cout<<"-----------Maximum Salary------------"<<endl;
    cout<<a.maxsEsalary();




    

}