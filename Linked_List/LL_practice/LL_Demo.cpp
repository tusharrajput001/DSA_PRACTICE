// Implementation of Node

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;   // data
//     Node *next; // Pointer

//     // constructor
// public:
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// int main()
// {
//     vector<int> arr = {2, 5, 7, 8};

//     Node *node1 = new Node(arr[0]);
//     cout << node1->data << endl;
//     cout << node1->next << endl;
// }

// Insert Node at head or tail

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;   // data
    Node *next; // Pointer

    // constructor
public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created a new node
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    print(head);

    InsertAtTail(tail, 20);
    InsertAtTail(tail, 25);

    print(head);
}