#include <iostream>
using namespace std;
int main(){
    // char x ='D';
    // switch(x){
    //     case 'A':
    //     cout<<"Character is A"<<endl;
    //     break;
    //     case 'B':
    //     cout<<"Character is B"<<endl;
    //     break;
    //     default:
    //     cout<<"None"<<endl;
    // }

    // ----------------------------------------------------------
    // int phy,chem,bio,maths,comp;
    // cout<<"Enter Your Physics Marks - ";
    // cin>>phy;
    // cout<<"Enter Your Chemistry Marks - ";
    // cin>>chem;
    // cout<<"Enter Your Biology Marks - ";
    // cin>>bio;
    // cout<<"Enter Your Maths Marks - ";
    // cin>>maths;
    // cout<<"Enter Your Computer Marks - ";
    // cin>>comp;
    // float perc = ((phy+chem+bio+maths+comp)*100)/500;
    // cout<<"Your Percentage are - "<<perc<<endl;
    // int avg = (int) perc/10;
    // cout<<avg<<endl;

    // switch(avg){
    //     case 10:
    //     cout<<"Grade is A";
    //     break;
    //     case 9:
    //     cout<<"Grade is A";
    //     break;
    //     case 8:
    //     cout<<"Grade is B";
    //     break;
    //     case 7:
    //     cout<<"Grade is C";
    //     break;
    //     case 6:
    //     cout<<"Grade is D";
    //     break;
    //     case 5:
    //     cout<<"Grade is E ";
    //     break;
    //     default:
    //     cout<<"Grade is F";
    //     break;
    //     }

    // --------------------------------------------------------

    // int a,b;
    // cout<<"Enter First value - ";
    // cin>>a;
    // cout<<"Enter Second value - ";
    // cin>>b;
    // switch(a>b){
    //     case 1:
    //     cout<<"A is bigger";
    //     break;
    //     case 0:
    //     cout<<"B is bigger";
    //     break;
    // }


    // --------------------------------------------------------
    // int a;
    // cout<<"Enter a number - ";
    // cin>>a;
    // int b = a%5==0 && a%11==0;
    // switch(b){
    //     case 1:
    //     cout<<"Divisble by 5 and 11"<<endl;
    //     break;
    //     case 0 :
    //     cout<<"Not Divsible by 5 and 11"<<endl;
    //     break;
    //     default:
    //     cout<<"Invlaid Number"<<endl;
    // }

    // -----------------------------------------------------------
    // int x,y;
    // cout<<"Enter Year - ";
    // cin>>x;
    // y=x%4==0;
    // switch(y){
    //     case 1:
    //     cout<<"It is a leap Year"<<endl;
    //     break;
    //     case 0:
    //     cout<<"It is not a leap year"<<endl;
    //     break;
    //     default:
    //     cout<<"Invalid Year"<<endl;
    //     break;
    // }

    // ----------------------------------------------------------
    //char a,b,c;
    // cout<<"Enter Character - ";
    // cin>>a;
    // b=tolower(a);
    // c = b=='a' || b=='e' || b=='i' || b=='o'|| b=='u';
    // switch(c){
    //     case 1:
    //     cout<<"It is a vowel"<<endl;
    //     break;
    //     case 0:
    //     cout<<"It is a consonant"<<endl;
    //     break;
    //     default:
    //     cout<<"Invalid Character"<<endl;
    //     break;
    // }
    

    // --------------------------------------------------------------
    // int s1,s2,s3,equilateral,isoceles,scalen;
    // cout<<"Enter First Side - ";
    // cin>>s1;
    // cout<<"Enter Second Side - ";
    // cin>>s2;
    // cout<<"Enter Third Side - ";
    // cin>>s3;
    // equilateral = s1==s2 && s2==s3 && s1==s3;
    // isoceles = s1==s2 || s2==s3 || s3==s1;
    // scalen = s1 != s2 || s2 != s3 || s1!=s3;
    // switch(equilateral){
    //     case 1:
    //     cout<<"Equilateral Triangle"<<endl;
    //     break;
    //     case 0:
    //     cout<<"Not an Equilateral Triangle"<<endl;
    //     }
    // switch(isoceles){
    //     case 1:
    //     cout<<"Isoceles Triangle"<<endl;
    //     break;
    //     case 0:
    //     cout<<"Not an Isoceles Triangle"<<endl;
    // }
    // switch(scalen){
    //     case 1:
    //     cout<<"Scalen Triangle"<<endl;
    //     break;
    //     case 0:
    //     cout<<"Not a Scalen Triangle"<<endl;
    // }

    // ------------------------------------------------------
    // int cp,sp;
    // cout<<"Enter Cost price - ";
    // cin>>cp;
    // cout<<"Enter Selling price - ";
    // cin>>sp;
    // int check = sp>cp;
    // switch(check){
    //     case 1:
    //     cout<<"Profit";
    //     break;
    //     case 0:
    //     cout<<"loss";
    
    // }

    // --------------------------------------------------------
    // int a;
    // cout<<"Enter a number";
    // cin>>a;
    // int check = a%2==0;
    // switch(check){
    //     case 1:
    //     a+=1;
    //     cout<<a;
    //     break;
    //     case 0 :
    //     cout<<"Not an Even Number";
    // }

    // --------------------------------------------------------

    // int x,y,z;
    // cout<<"Enter first value - ";
    // cin>>x;
    // cout<<"Enter second value - ";
    // cin>>y;
    // int check = x!=y;;
    // switch(check){
    //     case 1:
    //     z=y;
    //     y=x;
    //     x=z;
    //     cout<<"value of x - "<<x<<endl;
    //     cout<<"value of y - "<<y<<endl;

    //     break;
         
    //     case 0 :
    //     cout<<"Numbers are same"<<endl;

    // }


    // ----------------Months Days------- jan,feb,march,apr,may,june,july,august,sep,oct,nov,dec
    // 1,3,5,7,8,10,12 - 31
    // 4,6,9,11
    // 2

    // cout<<"Enter Month Number : ";
    // int n;
    // cin>>n;
    // switch((n<=7) && (n%2!=0)){
    //     case 1:
    //     cout<<"31 Days";
    // }
    // switch((n>=8) && (n%2==0)){
    //     case 1:
    //     cout<<"31 Days";
    // }

    // switch(n==4 || n==6 || n==9 || n==11){
    //     case 1:
    //     cout<<"30 Days";
    // }

    // switch (n==2){
    //     case 1:
    //     cout<<"28 Days";
    // }
 



    // --------------Calculator----------------------
    int a,b;
    char o ;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter Operator(+,-,*,/) : ";
    cin>>o;
    switch(o){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;

        default:
        cout<<"Invalid Operator";
    }



    





    
























    return 0;

}