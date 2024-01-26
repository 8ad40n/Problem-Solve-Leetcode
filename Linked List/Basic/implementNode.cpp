// linked list is a linear data structure
// collection of nodes
// 1. Data | 2. Next node's Address
// dynamic data structure (grow / shrink in runtime) - no memory wastage
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


int main()
{
    Node* node1 = new Node(10);
    cout<< node1 -> data <<endl;
    cout<< node1 -> next<<endl;
}