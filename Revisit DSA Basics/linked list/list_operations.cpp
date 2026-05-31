#include<iostream>
#include<vector>

using namespace std;

// Node structure and basic implementation
class Node {
    public:
    int data;
    Node *next;

    // Constructor
    Node(int val){
        data =  val;
        next = nullptr;
    }

    // Constructor with data and next pointer
    Node(int val, Node *ptr){
        data =  val;
        next = ptr;
    }
};


class list {
    private:
    Node *head; 
    Node *tail;
    int size;  

    public:
    list(){
        head = nullptr;
        tail = nullptr;
        size = 0;   
    }
    
    ~list(){
        cout<<"Destroy Linkedlist"<<endl;
    }
};

int main(){



    return 0;
}