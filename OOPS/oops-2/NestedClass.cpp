#include <iostream>
using namespace std;

class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};


class Player{
    private:
    class Helmet{
        int hp;
        int level;

        public:
        //setter
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }

        //getter

        int getHp(){
            return hp;
        }

        int getlevel(){
            return level;
        }
    };

    private:
    int health;
    int score;
    int age;
    Gun gun;
    Helmet helmet;

    //setter
    public:
    void setHealth(int health){
        this->health = health;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAge(int age){
        this->age = age;
    }

    void setGun(Gun gun ){
        this->gun = gun;
    }

    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;
        if(level==1) health = 25;
        else if(level==2) health = 36;
        else if(level==3) health  = 89;
        else cout<<"Enter Valid Level";

        helmet->setHp(health);
        this->helmet = *helmet;
    }

    //getter
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    int getAge(){
        return age;
    }

    Gun getGun(){
        return gun;
    }

    void getHelmet(){
        cout<<helmet.getlevel()<<endl;
        cout<<helmet.getHp();
    }

};


int main(){



      
    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    Player harsh;
    harsh.setHealth(100);
    harsh.setScore(200);
    harsh.setAge(19);
    harsh.setGun(akm);
    harsh.setHelmet(2);
    
 

    cout<<harsh.getHealth()<<endl;
    cout<<harsh.getScore()<<endl;
    cout<<harsh.getAge()<<endl;

    Gun PlayerGun = harsh.getGun();
    cout<<PlayerGun.ammo<<endl;
    cout<<PlayerGun.damage<<endl;
    cout<<PlayerGun.scope<<endl;

    harsh.getHelmet();

 
    



  


}