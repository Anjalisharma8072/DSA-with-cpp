#include <iostream>
using namespace std;
int main(){
    // int a;
    // cout<<"Enter a number - ";
    // cin>>a;
    // if(a%2==0){
    //     cout<<"A is an even number";
    // }
    // else{
    //     cout<<"A is odd number";
    // }

    // -----------------------------------------------------------------
    // int a;
    // cout<<"Enter a number: ";
    // cin>>a;
    // if(a>0){
    //     cout<< a*a<<endl;
    // }
    // else{
    //     clog<<"An error occured";
    // }

    // char a;
    // cout<<"Enter Character - ";
    // cin>>a;
    // if(a>48 && a<57){
    //     cout<<"It is a digit"<<endl;
    // }
    // else if(a>=65 && a<90){
    //     cout<<"It is a capital alphabet"<<endl;
    // }
    // else if(a>=97 && a<122){
    //     cout<<"It is a small alphabet"<<endl;
    // }
    // else{
    //     cout<<"It is a special character"<<endl;
    // }

    // ----------------------------------------------------------
    // int amount;
    // int note;
    // cout<<"Enter Amount - ";
    // cin>>amount;
    // cout<<"Enter Note to be counted - ";
    // cin>>note;
    // int totalnote = amount/note;
    // cout<<"Total Notes in amount - "<<totalnote<<endl;

    // ------------------------------------------------------------
    // int angleA,angleB,angleC;
    // cout<<"Enter Value of angleA - ";
    // cin>>angleA;
    // cout<<"Enter Value of angleB - ";
    // cin>>angleB;
    // cout<<"Enter Value of angleC - ";
    // cin>>angleC;
    // if(angleA+angleB+angleC==180){
    //     cout<<"It is a triangle";
    // }
    // else{
    //     cout<<"It is not a triangle";
    // }

    // -------------------------------------------------
    int x,y;
    char opr;
    cout<< "Enter First number - ";
    cin>>x;
    cout<< "Enter Second number - ";
    cin>>y;
    cout<<"Enter Operator - ";
    cin >> opr;

    if( opr=='+'){
        cout<<x+y;
    }
    else if(opr =='-'){
        cout<<x-y;
    }
    else if(opr =='*'){
        cout<<x*y;
    }
    else if(opr=='/'){
        cout<<x/y;
    }
    else if(opr=='%'){
        cout<<x%y;
    }
    else{
        cout<<"Invalid Operator";
    }







    return 0;
}