#include <iostream>
#include <vector>
using namespace std;
int main(){

    // vector <int> v1;
    // v1.push_back(2);
    // v1.push_back(4);
    // v1.push_back(8);

    // vector <int> v2;
    // v2.push_back(12);
    // v2.push_back(42);
 
    // // 2-D vectors

    // vector< vector <int> > v ;
    // v.push_back(v1);
    // v.push_back(v2);



    //Declration methods-------------


    // vector <vector <int> >v1(3,vector<int> (4,2));
    // for(int i = 0;i<3;i++){
    //     for(int j = 0;j<4;j++){
    //         cout<<v1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //size-------------------
    // //-----------column-------
    // cout<<v1.size()<<endl;
    // //--------------rows---------
    // cout<<v1[0].size();




    // vector <int> v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(4);

    vector <int> v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);

    vector<int>v3;
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(12);


 
    // 2-D vectors

    // vector< vector <int> > v ;
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);

    // int m = v.size();
    // int n  = v[0].size();
    // // cout<<m<<" "<<n;

    // vector<int>res;

    // int top = 0 ,bottom = m-1;
    // int left = 0,right = n-1; 



    // while(top<=bottom && left<=right){
    //     //right
    //     for(int i =left;i<=right;i++){
    //         res.push_back(v[top][i]);
    //     }
    //     top++;

    //     // for(int i = 0;i<n;i++){
    //     //     cout<<res[i]<<" ";
    //     // }

    //     //bottom
    //     for(int i = top;i<=bottom;i++){
    //         res.push_back(v[i][right]);
    //     }
    //     right--;
    //     // for(int i = 0;i<5;i++){
    //     //     cout<<res[i]<<" ";
    //     // }

    //     for(int i = right;i>=left;i--){
    //         res.push_back(v[bottom][i]);
    //     }
    //     bottom--;

    //     // for(int i = 0;i<8;i++){
    //     //     cout<<res[i]<<" ";
    //     // }
    //     for(int i = bottom;i>=top;i--){
    //         res.push_back(v[i][left]);
    //     }
    //     left++;


    // }

    //   for(int i = 0;i<12;i++){
    //         cout<<res[i]<<" ";
    
    //     }









    int n = 0;
    // int ele = n*n;

    vector<vector<int> > v(n,vector<int>(n,0));
    //  for(int i = 0;i<3;i++){
    //     for(int j = 0;j<3;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int left = 0,right = n-1;
    int top = 0,bottom = n-1;
    int a = 1;



int s = (n*n)+1;
while(a!=s){
    for(int i = left;i<=right;i++){
        v[top][i] = a;
        a++;
    }
    top++;

    for(int i = top;i<=bottom;i++){
        v[i][right] = a;
        a++;
    }
    right--;

   
    for(int i = right;i>=left;i--){
        v[bottom][i] = a;
        a++;
    }

    bottom--;
    for(int i = bottom ;i>=top;i--){
        v[i][left] = a;
        a++;
    }
    left++;
}

    



     for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }



 



   




    

}

