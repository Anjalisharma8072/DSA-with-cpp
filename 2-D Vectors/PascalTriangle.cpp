#include <iostream>
#include <vector>
using namespace std;

 vector<vector<int>> generate(int numRows) {
        int m = numRows;
        vector <vector <int> > v;
        for(int i = 0;i<m;i++){
            vector <int> a(i+1);
            v.push_back(a);
            for(int j=0;j<=i;j++){
                if(j==i || j==0) v[i][j] = 1;
                else v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
        return v;
    }

int main(){
     


}