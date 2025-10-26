#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string str = "My";

    stringstream ss(str);

    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }



//     string s;
//     cout<<"Enter a sentence : ";
//     getline(cin,s);

//     vector <string> v;

//     stringstream ss(s);
//     string temp;
//     while(ss>>temp){

//         v.push_back(temp);
        
        
//     }

//     for(int i = 0;i<v.size();i++){
//             cout<<v[i]<<endl;
//         }

//     sort(v.begin(),v.end());

//     for(int i = 0;i<v.size();i++){
//             cout<<v[i]<<endl;
//         }

//     int count = 1;
//     int maxcount = 1;    

//     for(int i = 0;i<v.size();i++){
//             if(v[i]==v[i-1]) count++;
//             else count= 1;

//             maxcount = max(count,maxcount);



//         }
//         count =1;
//         for(int i = 0;i<v.size();i++){
//             if(v[i]==v[i-1]) count++;
//             else count= 1;

//            if(count==maxcount){
//             cout<<v[i]<<" "<<maxcount<<endl;
//            }



//         }

       

    

    


}