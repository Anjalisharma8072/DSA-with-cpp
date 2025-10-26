#include <iostream> 
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

class LinkedList{
public:
        Node* head;
        Node* tail ;
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
    void InsertAtBeg(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
           
        }
        size++;
    }

    void InsertAtIdx(int idx , int val){
        if(idx>size || idx<0) cout<<"Index is Not Valid";
        else if(idx==0) InsertAtBeg(val);
        else if(idx==size-1) InsertAtEnd(val);
        else{
            Node* t = new Node (val);
            Node* temp  = head;
            for (int i = 0;i<idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    void DelHead(){
        if(size==0) cout<<"List iS Empty";
        else{
            head = head->next;
            size--;
        }
    }
    void DelEnd(){
        if(size==0) cout<<"List is Empty";
        else{
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = NULL;
            size--;
        }
    }

    void Deldx(int idx){
        if(idx>=size || idx<0) cout<<"Invalid Index";
        else if(idx==0) DelHead();
        else if(idx==size-1) DelEnd();
        else{
            Node* temp = head;
            for(int i = 0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    //Display
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
    ll.InsertAtEnd(10);
    ll.InsertAtEnd(20);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);
    ll.Display();
    ll.InsertAtBeg(80);
    ll.Display();
    ll.InsertAtIdx(2,90);
    ll.Display();
    ll.DelHead();
    ll.Display();
    ll.DelEnd();
    ll.Display();
    ll.Deldx(1);
    ll.Display();
    

}