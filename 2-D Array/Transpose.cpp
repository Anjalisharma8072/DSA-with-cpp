#include <iostream>
using namespace std;
int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(int i = 0;i<4;i++){
        for(int j = 0 ; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}
cout<<endl;


    //Printing transpose

    // for(int i = 0;i<3;i++){
    //     for(int j = 0 ; j<2;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

// storing in another matrix

// int arr2[3][2];
// for(int i  = 0;i<3;i++){
//     for(int j  = 0;j<2;j++){
//         arr2[i][j] = arr[j][i];
  

//     }
//     cout<<endl;
// }

// cout<<endl;
// for(int i = 0;i<3;i++){
//         for(int j = 0 ; j<2;j++){
//             cout<<arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// for(int i  = 0;i<3;i++){
//     for(int j  = 0;j<3;j++){
//         arr[i][j] = arr[j][i];

//     }
//     cout<<endl;
// }
// for(int i = 0;i<3;i++){
//         for(int j = 0 ; j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
// }



// storing transpose in same matrix
// for(int i  = 0;i<4;i++){
//     for(int j = 0;j<4;j++){
//         if(arr[i] < arr[j]){
//             int temp = arr[j][i];
//             arr[j][i] = arr[i][j];
//             arr[i][j] = temp;
            

//         }
//     }
// }

//-------------pw method---------------

for(int i  = 0;i<4;i++){
    for(int j = i+1;j<4;j++){
       
        int temp = arr[j][i];
        arr[j][i] = arr[i][j];
        arr[i][j] = temp;
            

       
    }
}


for(int i = 0;i<4;i++){
        for(int j = 0 ; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}




}