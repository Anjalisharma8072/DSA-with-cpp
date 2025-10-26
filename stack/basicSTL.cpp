#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size();

    //printing elements from top to bottom

    while(st.size()){
        // cout<<st.top()<<endl;
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }


    //printing elements from bottom to top
    // while(temp.size()){
    //     // cout<<temp.top()<<endl;
    //     temp.pop();
    // }

    cout<<st.top();

}