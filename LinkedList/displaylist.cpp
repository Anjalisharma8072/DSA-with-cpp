#include <iostream>
#include <vector>
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
    Node* a = new Node(3);
    Node* b = new Node(0);
    Node* c = new Node(2);
    Node* d = new Node(6);
    Node* e = new Node(8);
    Node* f = new Node(1);
    Node* g = new Node(7);
    Node* h = new Node(9);
    Node* i = new Node(4);
    Node* j = new Node(2);
    Node* k = new Node(5);
    Node* l = new Node(5);
    Node* m = new Node(6);
   

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    j->next = k;
    k->next = l;
    l->next = m;
    
    //Displaying list
    // Node* temp = a;
    // while(temp!=NULL){
    //     cout<<temp->val<<endl;
    //     temp = temp->next;
    // }


    int x = 3;  //row
    int n = 5;  //col
    int left = 0,right = n-1;
    int top = 0,bottom = x-1;
    // int ele = x*n;
    Node* temp = a;

    vector<vector<int>> v(x,vector<int>(x*n,-1));
    //   for(int i = 0;i<x;i++){
    //     for(int j = 0;j<n;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    



while(left<=right && top<=bottom){
    for(int i = left;i<=right;i++){
        if(temp==NULL) break;
        v[top][i] = temp->val;
        temp = temp->next;
       
 }

    top++;
    if(left>right || top>bottom) break;
    for(int i = top;i<=bottom;i++){
        if(temp==NULL) break;
        v[i][right] = temp->val;
        temp = temp->next;
       
    }

    right--;
    if(left>right || top>bottom) break;
    for(int i = right;i>=left;i--){
        if(temp==NULL) break;
        v[bottom][i] = temp->val;
        temp = temp->next;
        
    }
    bottom--;
    if(left>right || top>bottom) break;
     for(int i = bottom;i>=top;i--){
           if(temp==NULL) break;
            v[i][left] = temp->val;
            temp = temp->next;
            
    }
    left++;

}

   for(int i = 0;i<x;i++){
        for(int j = 0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;




    

    

  
    

}