#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head -> prev =temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    //if insert at first position
    if(position == 1)
    {
        insertAtHead(head,d);
        return;   
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1){
        temp= temp -> next;
        cnt++;
    }
    // inserting at last position
    if(temp -> next == NULL)
    {
        insertAtTail(tail,d);
        return;
        
    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}



void print(Node* head){
    Node* temp= head;

    while (temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength(Node* head)
{
    int len = 0;
    Node* temp= head;

    while (temp != NULL)
    {
        temp = temp -> next;
        len++;
    }
    return len;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<"Length: "<< getLength(head)<<endl;

    insertAtHead(head, 11);
    insertAtTail(tail, 25);
    InsertAtPosition(head, tail, 2, 100);
    
    print(head);
}