#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <string> str = {"Interstellar", "Internet", "Internal"};
     
     //-------------My logic that passes only 2 testcase of 126----------------
    // int size = str[0] .size();
    // for(int i = 0;i<3;i++){
    //     if(str[i].size()<size) size = str[i].size();
    // }
    // int n = str.size();

    // int i = 0;
    // int count = 0;
    // int ncount = 0;
    // for(int j = 1;j<n;j++){
    //     for(int k = 0;k<size;k++){
    //     if(j!=1){
    //         if(str[i][k]!=str[j][k]) count--;
    //         else ncount++;
    //     }
    //     else if(str[i][k]==str[j][k]) count++;

    //     }
    // }


    // if(count<0)cout<<" ";
    // else cout<<str[0].substr(0,count);


    //---------raghav sir logic-------------------------
    sort(str.begin(),str.end());
    int n = str.size();
    string first = str[0];
    string last = str[n-1];
    if(n==1) cout<<str[0];
    string word = "";
    for(int i = 0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]) word+=first[i];
        else break;
    }

    cout<<word;
    

  
}