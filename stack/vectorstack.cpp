#include <iostream>
#include <vector>
using namespace std;

class Stack{

public:
   vector<int>v;
    Stack(){
    }

    //push
    void push(int val){
          v.push_back(val);
          return;
    }

    //top
    int top(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return v[v.size()-1];
    };

    //pop
    void pop(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return;
        }
       v.pop_back();
       return;
    }

    //display
    void display(){
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
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
    st.display();
    cout<<st.top()<<endl;
}