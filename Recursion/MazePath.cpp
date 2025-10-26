#include <iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if((sr>er)  || (sc>ec )) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    return rightways + downways;
}

void mazeprint(int sr,int sc,string s){
    if((sr<1)  || (sc<1 )) return;
    if(sr==1 && sc==1) {
            cout<<s<<endl;
            return;
    };
    mazeprint(sr,sc-1,s+"R");
    mazeprint(sr-1,sc,s+"D");
    
}

int maze2(int sr,int sc){
    if((sr<1)  || (sc<1 )) return 0;
    if(sr==1 && sc==1) return 1;
    int rightways = maze2(sr,sc-1);
    int downways = maze2(sr-1,sc);
    return rightways + downways;
}
int main(){
       
       mazeprint(3,3,"");
}