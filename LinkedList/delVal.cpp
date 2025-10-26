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

void Delete(Node* head,int idx){
    Node* temp = head;
    for(int i = 0;i<idx;i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

Node* DelVal(Node* head,int val){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        if(temp->val==val){
            Delete(head,n);
        };
        temp = temp->next;
        n++;
    }
    return head;

}

int main(){

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(6);
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(5);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    cout<<a->val<<endl;
    cout<<DelVal(a,6);


}