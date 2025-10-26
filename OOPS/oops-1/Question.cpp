#include <iostream>
using namespace std;

class book{
    public:
    string name;
    int pages;
    int price;
    
    int count(int p){
        if(price<p) return 1;
        else return 0;
    }

    bool isPresent(string book_name){
        if(book_name==name) return true;
        else return false;
    }
};

int main(){
    book potter;
    potter.name = "Harry Potter";
    potter.pages = 345;
    potter.price = 234;
    cout<<potter.count(123)<<endl;
    cout<<potter.isPresent("Harryy Potter");

}