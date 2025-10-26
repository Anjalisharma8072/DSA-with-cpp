#include <iostream>
using namespace std;
int BtoD(string data){
    int result = 0;
    int n = data.size();
    for(int i = n-1;i>=0;i--){
        int num = data[i]-'0';
        result = result+(num*(1<<(n-i-1)));

    }
    return result;
}
int main(){
    string data = "001011";
    cout<<BtoD(data);

}