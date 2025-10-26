#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Stack
{
public:
    int size;
    Node *head;
    Stack()
    {
        head = NULL;
        size = 0;
    }

    // push
    void push(int val)
    {
        Node *temp = new Node(val);
        head->next = temp;
        head = temp;
        size++;
    };

    // pop
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        };
        head = head->next;
        size--;
    }

    // top
    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->val;
    }


    //display
    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};



int main()
{

    Stack st;
    st.pop();  //stack is empty

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    // st.push(70); //stack is full

    st.pop();
    st.pop();
    cout << st.top() << endl;
    cout << st.size << endl;
    st.display();
}