#include <iostream>
using namespace std;

class Node{                         //User Defined Data Type
public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next= NULL;
    }
};

class LinkedList{                 //User Defined Data Structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void InsertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;

    }

    void InsertAtBeginning(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void InsertAtIdx(int idx,int val){
        if(idx>size|| idx<0) cout<<"Invalid Index"<<endl;
        else if(idx==0) InsertAtBeginning(val);
        else if(idx==size-1) InsertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1;i<=idx-1;i++){
               temp =  temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }

}

    int getElement(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index ";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1)return tail->val;
        else{
            Node* temp = head;
            for(int i = 1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    
    }
    void DelAtHead(){
        if(size==0)cout<<"List is empty"<<endl;
        else{
            head = head->next;
            size--;
        };
    }
    void DelAtTail(){
        if(size==0)cout<<"List is Empty"<<endl;
        else{
            Node* temp = head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            size--;
        }
    }
    void DelAtIdx(int idx){
        if(idx<0||idx>=size)cout<<"Invalid Index"<<endl;
        else if(idx==0) DelAtHead();
        else if(idx==size-1) DelAtTail();
        else{
            Node* temp=head;
            for(int i = 1;i<=idx-1;i++){
                temp= temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void Display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

   

};


int main(){
    LinkedList ll;
    ll.InsertAtEnd(1);
    ll.InsertAtEnd(2);
    ll.InsertAtEnd(3);
    ll.InsertAtEnd(4);
    ll.InsertAtEnd(5);
    // ll.InsertAtBeginning(70);
    // ll.InsertAtIdx(3,100);
    // ll.InsertAtBeginning(90);
    // ll.Display();
    // ll.DelAtHead();
    // ll.DelAtTail();
    // ll.DelAtIdx(2);
    // ll.Display();
    // cout<<ll.size<<endl;
    // cout<<ll.getElement(2);
    ll.Display();
    
}