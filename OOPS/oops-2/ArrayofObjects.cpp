#include <iostream>
#include <vector>
using namespace std;

class Crickter{
private:
    string name;
    int age;
    int noOfTestMatches;
    int avgScore;

public:

    //setter

    void setName(string name){
        this->name = name;
    }


    void setAge(int age){
        this->age = age;
    }

    void setTestMatches(int noOfTestMatches){
        this->noOfTestMatches = noOfTestMatches;
    }

    void setAvgScore(int avgScore){
        this->avgScore = avgScore;
    }

    //Getter
    
    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    int getTestMatches(){
        return noOfTestMatches;
    }

    int getAvgScore(){
        return avgScore;
    }
    
};

int main(){

    // Crickter virat;
    // virat.setName("Virat Kholi");
    // virat.setAge(37);
    // virat.setTestMatches(10);
    // virat.setAvgScore(95);

    // Crickter Dhoni;
    // Dhoni.setName("MS Dhoni");
    // Dhoni.setAge(45);
    // Dhoni.setTestMatches(20);
    // Dhoni.setAvgScore(98);

    // Crickter players[] = {virat,Dhoni};
    // cout<<players[0].getName()<<endl;
    // cout<<players[0].getAge()<<endl;
    // cout<<players[0].getTestMatches()<<endl;
    // cout<<players[0].getAvgScore()<<endl;

    // cout<<players[1].getName()<<endl;
    // cout<<players[1].getAge()<<endl;
    // cout<<players[1].getTestMatches()<<endl;
    // cout<<players[1].getAvgScore()<<endl;

    int noOfPlayers = 2;
    Crickter* players = new Crickter[noOfPlayers];


    //input Details

    string name;
    int age,testMatch,score;
    for(int i = 0 ;i<noOfPlayers;i++){
        cout<<"Enter Player "<<i+1<<" Details"<<endl;
        cout<<"Name : "<<endl;
        cin>>name;
        cout<<"age : "<<endl;
        cin>>age;
        cout<<"Number of Test Matches : "<<endl;
        cin>>testMatch;
        cout<<"Average Score : "<<endl;
        cin>>score;

        players[i].setName(name);
        players[i].setAge(age);
        players[i].setTestMatches(testMatch);
        players[i].setAvgScore(score);
    }

    //output details

    cout<<"----------------------------------"<<endl;

    for(int i = 0;i<noOfPlayers;i++){
        cout<<"Players "<<i+1<<" Details"<<endl;
        cout<<"Name : "<<players[i].getName()<<endl;
        cout<<"Age : "<<players[i].getAge()<<endl;
        cout<<"Number of Test Matches : "<<players[i].getTestMatches()<<endl;
        cout<<"Average Score : "<<players[i].getAvgScore()<<endl;
        cout<<endl;
    }

    delete[] players;  //memory deallocation
    return 0;
    

}