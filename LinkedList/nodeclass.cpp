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

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // a.next->val = 500;           //updation
    // cout<< (((a.next)->next)->next)->val<<endl;

    // cout<< (a.next)->val<<endl;
    // cout<< (b.next)->val<<endl;
    // cout<< (c.next)->val<<endl;
    // cout<< (d.next)<<endl;


    //printing linkedlist
    Node temp = a;
    while(1){
        cout<<temp.val<<endl;
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }

}