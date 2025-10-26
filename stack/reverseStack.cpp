#include <iostream>
#include <stack>
using namespace std;




class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
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
int main(){
    stack<int>st;
    stack<int>temp1;
    stack<int>temp2;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.size();

    //reverse using stacks
    while(st.size()){
        temp1.push(st.top());
        st.pop();
    }
   
    while(temp1.size()){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size()){
        st.push(temp2.top());
        temp2.pop();
    }
    //print(st);

    //reverse using linked list //10,20,30,40,50
    Node* dummy = new Node(100);
    Node* temp = dummy;
    while(st.size()){
        Node* a = new Node(st.top());
        temp->next = a;
        temp= temp->next;
        st.pop();
    }
    temp = dummy->next;
    while(temp){
        st.push(temp->val);
        temp = temp->next;
    }
    print(st);
    cout<<st.top();


}