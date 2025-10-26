#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
   
    vector<int>g;
    g.push_back(1);
    g.push_back(2);
    g.push_back(3);
    // g.push_back(7);

    vector<int>s;
    s.push_back(3);
    // s.push_back(5);
    // s.push_back(2);
    // s.push_back(2);

    sort(s.begin(),s.end());
    sort(g.begin(),g.end());

    // int children = 0;
    // for(int i = 0;i<g.size();i++){
    //     for(int j = 0;j<s.size();j++){
    //         if(s[j]>0){
    //             if(s[j]>=g[i]){
    //             children++;
    //             s[j] = -(j);
    //             break;
    //         }
    //         }
            
    //     }
    // }
    // cout<<children;
    

    //pw approach
    int i = 0;
    int j = 0;
    int child = 0;
    while(i<g.size()&&j<s.size()){
        if(s[j]>=g[i]){
            child++;
            i++;
            j++;
        }else j++;
    }

    cout<<child;


}