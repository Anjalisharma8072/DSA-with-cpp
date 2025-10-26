#include <iostream>
using namespace std;

class Date{
    int date;
    int month;
    int year;

    //setter
public:
    void set_date(int date){
        this->date = date;
    }

    void set_month(int month){
        this->month = month;
    }

    void set_year(int year){
        this->year = year;
    }

    //getter
    int get_date(){
        return date;
    }

    int get_month(){
        return month;
    }

    int get_year(){
        return year;
    }

    void compare(int d, int m , int y){
        if(d==date && m==month && y==year) cout<<"Equal"<<endl;
        else cout<<"Unequal";
    }

};

int main(){

    Date d;
    d.set_date(4);
    d.set_month(10);
    d.set_year(2024);

    d.compare(4,10,2025);


}