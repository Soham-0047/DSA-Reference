#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node *head;
    Node *tail;
    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        // First create the new node
        Node *newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val){
        Node *newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front(){
        if(head == NULL) return;
        Node *tmp = head;
        head = head->next;
        tmp-> next  = NULL;
        delete tmp;
    }

    void pop_back(){
        if(head == NULL) return;
        Node *tmp = head;

        while(tmp->next != tail) {
            tmp = tmp->next;
        }
        tmp->next = NULL;
        delete tail;
        tail = tmp;
    }

    void print(){
        Node *tmp = head;
        while(tmp != NULL){
            cout<<tmp->data<<" -> ";
            tmp =  tmp->next;
        }
        cout<<"NULL"<<endl;
    }
//  1 -> 2 -> 3 -> |   |  -> 5
    void insertAtMidddle(int val, int pos){
        Node *newnode = new Node(val);
        // 0 based indexing
        pos = pos-1;
        if(head == NULL) {
            tail = head = newnode;
        } else {
            int i =0;
            Node *tmp = head;
            while(i != pos-1){
                tmp = tmp->next;
                i++;
            }
            newnode->next = tmp->next;
            tmp->next = newnode;
        }
        
    }

    void reverseList(){
        if(head == NULL) return;
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        while(curr != NULL){
            next =  curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }
};


int main() {
   int a =1;
   float b = 2.345;
   long long c = 345563;
   double d = 34553.5645;
   char e = 'e';
   bool k = true;
//   cout<<"Declare"<<endl;
//   cout<<typeid(a).name()<<endl;

    List l;
    l.push_front(34);
    l.push_front(45);
    l.push_front(22);
    l.push_front(90);
    l.push_back(787);
    l.push_back(455);
    l.pop_back();
    l.print();

    l.insertAtMidddle(3400,3);

    l.print();

    l.reverseList();

    l.print();

    return 0;
}