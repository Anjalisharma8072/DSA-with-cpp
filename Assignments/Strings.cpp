#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
int main(){

    //Input a string of length n and count all the consonants in the given string.

    // cout<<"Enter a string : ";
    // string s;
    // getline(cin,s);
    // int count = 0;
    // for(int i = 0;i<s.size();i++){
    //     if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!=' ' ) count++;
    // }

    // cout<<count;



    //Check whether the given string is palindrome or not.

    
    // cout<<"Enter a string : ";
    // string s;
    // getline(cin,s);

    // string n = s;
    // reverse(s.begin(),s.end());
    // if(s==n) cout<< "palindrome";
    // else cout<<"Not a palindrome" ;


    //Input a string of even length and reverse the second half of the string.

    // cout<<"Enter a string : ";
    // string s;
    // getline(cin,s);
    // if(s.size()%2!=0) cout<<"Invalid Input";
    // else {
    // reverse(s.begin()+s.size()/2,s.end());
    // cout<<s;
    // }


    //Input a string of length less than 10 and convert it into integer without using builtin function.

    // cout<<"Enter a string : ";
    // string s;
    // getline(cin,s);
    // int sum = 0;
    // if(s.size()>10) cout<<"invalid Input";
    // else{
    //     for(int i = 0;i<s.size();i++){
          
    //         int n = s[i]-48;
    //         sum =n+(sum*10);


          
    //     }

    //     cout<<sum;
    // }


    

    //Input a string and concatenate with its reverse string and print it.

    // cout<<"Enter a string : ";
    // string s;
    // getline(cin,s);

    // string n = s;
    // reverse(s.begin(),s.end());
    // cout<<n+s;



    //Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.

    // cout<<"Enter a string : ";
    // string s;
    // getline(cin,s);
    // int max = 0;
    // int smax = 0;
    // vector <int>v;
    // for(int i = 0;i<s.size();i++){
    //     int n = s[i] - 48;
    //     v.push_back(n);


    // }

    // for(int i = 0;i<v.size();i++){
    //     cout<<v[i]<<" ";


    // }
    // cout<<endl;
    // for(int i = 0;i<v.size();i++){
    //     if(v[i]>max){
    //         smax = max;
    //         max = v[i];
           
    //     } 

  


    // }

    // cout<<smax;


    //Given a sentence ‘str’, return the word that is lexicographically maximum.

    // cout<<"Enter a string : ";
    // string s;
    // getline(cin,s);

    // sort(s.begin(),s.end());


    string s;
    cin >> s;
    int ans = 0, l = 0;
    for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
    s[i] == 'u')
    l++;
    else {
    ans = l * (l + 1) / 2;
    l = 0;
    }
    }
    ans += l * (l + 1) / 2;
    cout << ans;
    


















    

   
}

