#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d)
{
    //new node creation
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


void InsertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void print(Node* &head){
    Node* temp= head;

    while (temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }

    
}


int main()
{
    // created a new node
    Node* node1 = new Node(10);
    cout<< node1 -> data <<endl;
    cout<< node1 -> next<<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    
    InsertAtTail(tail, 16);
    print(head);
}