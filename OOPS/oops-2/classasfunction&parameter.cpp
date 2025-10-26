#include <iostream>
using namespace std;
class Player{
public:
    int health;
    int score;
    int age;
    bool alive;

//setter

void set_health(int health){
    // Player::health = health;
    this->health = health;
}
void set_score(int score){
    this->score = score;
}
void set_age(int age){
    this->age = age;
}
void set_alive(bool alive){
    this->alive = alive;
}

//getter

int get_health(){
    return health;
}
int get_score(){
    return score;
}
int get_age(){
    return age;
}
bool get_alive(){
    return alive;
}

};


int addScore(Player a , Player b ){
    return a.get_score()+b.get_score();
}


Player maxScore(Player a , Player b){
    if(a.get_score()>b.get_score()) return a;
    else return b;
}



int main(){

    //Static Memory Allocation
    Player aman;
    aman.set_health(100);
    aman.set_age(19);
    aman.set_score(120);
    aman.set_alive(true);


    Player anaya;
    anaya.set_health(100);
    anaya.set_age(20);
    anaya.set_score(130);
    anaya.set_alive(false);

    cout<<aman.get_age()<<endl;
    cout<<aman.get_alive()<<endl;
    cout<<aman.get_health()<<endl;
    cout<<aman.get_score()<<endl;

    cout<<endl;

    cout<<anaya.get_age()<<endl;
    cout<<anaya.get_alive()<<endl;
    cout<<anaya.get_health()<<endl;
    cout<<anaya.get_score()<<endl;

    cout<<endl;

    cout<<addScore(aman , anaya);

    cout<<endl;

    Player sanket = maxScore(aman,anaya);
    cout<<sanket.get_age()<<endl;

    //Dynamic Memory Allocation

    Player *urvi = new Player;
    // Player urviobj = *urvi;
    // urviobj.set_health(40);
    // (*urvi).set_health(40);

    urvi->set_health(40);               //precise method
    cout<<urvi->get_health();

}