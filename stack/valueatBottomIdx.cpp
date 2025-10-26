#include <iostream>
#include <stack>
using namespace std;


void print(stack<int>& st){
    stack<int>ts;
    while(st.size()){
        cout<<st.top()<<endl;
        ts.push(st.top());
        st.pop();
    }
    while(ts.size()){
        st.push(ts.top());
        ts.pop();
    }
}

void InsertAtBottom(stack<int>& st,int val){
    stack<int>helper;
    while(st.size()){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()){
        st.push(helper.top());
        helper.pop();
    }
}

void InsertAtIdx(stack<int>& st,int idx,int val){  //considering 0 based indexing
    stack<int>helper;
    while(st.size() >idx){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()){
        st.push(helper.top());
        helper.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.size();
    // InsertAtBottom(st,5);
    InsertAtIdx(st,2,100);
    print(st);
    





}