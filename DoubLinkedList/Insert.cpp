#include <iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }

    //Insert At head
    void InsertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }else{
            temp->next = head;
            head->prev = temp;
            head=temp;
        }
        size++;
    }

    void InsertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail=temp;
        }
        size++;
    }

    void InsertAtIdx(int idx,int val){
        Node* t =  new Node(val);
        if(idx<0 || idx>size-1) cout<<"Invalid Index";
        if(idx==0) InsertAtHead(val);
        else if(idx==size-1)InsertAtTail(val);
        else{
            Node* temp =  head;
            for(int i = 1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next =  t;
            t->prev = temp;
            t->next->prev = t;
        }
        size++;
    }

    void DelAtHead(){
        head = head->next;
        head->prev = NULL;
        size--;
    }

    void DelAtTail(){
        tail = tail->prev;
        tail->next = NULL;
        size--;

    }
    void DelAtIdx(int idx){
        if(idx<0 || idx>size-1) cout<<"Invalid Index";
        else if(idx==0) DelAtHead();
        else if(idx==size-1) DelAtTail();
        else{
            Node* temp = head;
            for(int i = 1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
        }
        size--;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    DLL list;
    list.InsertAtHead(10);
    list.InsertAtHead(20);
    list.InsertAtHead(30);
    list.InsertAtTail(40);
    list.InsertAtTail(50);
    list.InsertAtIdx(3,100);
    list.DelAtHead();
    list.DelAtTail();
    list.DelAtIdx(2);
    list.DelAtIdx(1);
    list.display();
}