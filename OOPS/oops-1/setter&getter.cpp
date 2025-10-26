#include <iostream>
using namespace std;

class Player{
    private:
    int health,score;

    //setter
    
    public:
    void set_health(int h){
        health = h;
    };
    void set_score(int s){
        score = s;
    };

    //getter

    void get_health(){
        cout<<"Health is : "<<health<<endl;
    }
    void get_score(){
        cout<<"Score is : "<<score<<endl;
    };
};

int main(){

    Player amit;
    amit.set_health(100);
    amit.set_score(101);
    amit.get_score();
    amit.get_health();
    

}