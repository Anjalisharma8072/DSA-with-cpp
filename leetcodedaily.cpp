#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "abbcccddddeeeee";
    int n = s.size();
    int i = 0;
       while(i<n-1){
        int count = 1;
        int idx=i;
            while(i+1<n && s[i]==s[i+1]){
              count++;
              i++;
            }
               
                cout<<count<<endl;
                 if (count > 2) {
                s.erase(idx, count - 2);  // Keep only two occurrences
                n = s.size();  // Update the size of the string after erasing
                i = idx + 2;   // Move i to the next character after the retained pair
        }   else {
            // Move to the next character if count <= 2
            i++;
        }
            }
        
        
    cout<<s;
}