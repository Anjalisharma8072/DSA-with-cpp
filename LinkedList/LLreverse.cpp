#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next = NULL;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void ReverseDisplay(Node* head){
    if(head==NULL) return;
    ReverseDisplay(head->next);
    cout<<head->val<<endl;
}

int main(){
    Node* a = new Node(1000);
    Node* b = new Node(2000);
    Node* c = new Node(3000);
    Node* d = new Node(4000);

    a->next = b;
    b->next = c;
    c->next = d;

    ReverseDisplay(a);


}