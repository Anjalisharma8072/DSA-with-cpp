#include <iostream>
using namespace std;

class Stack{

public:
    int idx;
    int arr[5];
    Stack(){
        idx=-1;
    }

    //push
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"Stack is full";
            return;
        }
            idx++;
            arr[idx] = val;
    }

    //top
    int top(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[idx];
    };

    //pop
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty";
            return;
        }
        idx--;
    }

    //size
    int size(){
        return idx+1;
    }


};

int main(){

    Stack st;
    // st.pop();  //stack is empty

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
    // st.push(70); //stack is full

    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

}