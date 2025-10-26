#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    // string str = "Anjali";
    // cout<<str[0];
    // cout<<str.substr(0,1)<<endl;
    // cout<<str.substr(2,4);
    string s = "iiii";
    int k = 1;
    vector<int>alphabet(27,0);
     for(int ele:alphabet){
            cout<<ele<<" ";
        }
        cout<<endl;
     int a = 97;
        for(int i = 1;i<27;i++){
            alphabet[i] = a;
            a++;
        }
        for(int ele:alphabet){
            cout<<ele<<" ";
        }
        int index = 0;
        int sum = 0;

        for(int i = 0;i<s.size();i++){
            int num = (int)s[i];
            for(int i = 1;i<alphabet.size();i++){
                if(num==alphabet[i]) {
                    index = i;
                    break;
                }

            }
            cout<<index<<endl;
            sum+=index;

        }
        cout<<endl;
        // cout<<sum;
        
        for(int i = 0;i<k;i++){
            sum=0;
            string cast = to_string(sum);
            for(int i = 0;i<cast.size();i++){
                sum+=(int)cast[i];
            }

        }
        cout<<sum<<endl;

}