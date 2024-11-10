#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

// constructors
public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};



// convert arr to ll
Node *convertArrtLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


int LenghtOfLL(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp){
        temp = temp -> next;
        cnt++;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {32, 35, 6, 35, 32};
    Node *head = convertArrtLL(arr);
    cout << "No of Nodes in LL are :" <<  " " ;
    cout << LenghtOfLL(head);

}
