// //BRUTEFORCE APPROACH
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// // Node class represents a node in a linked list
// class Node {
// public:

//     // Data stored in the node
//     int data;  
    
//      // Pointer to the next node in the list
//     Node* next;     

//     // Constructor with both data
//     // and next node as parameters
//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }

//     // Constructor with only data as
//     // a parameter, sets next to nullptr
//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// // Function to delete the
// // middle node of a linked list
// Node *deleteMiddle(Node *head) {

//     Node* temp = head;
//     int n = 0;
    
//     // Loop to count the number of
//     // nodes in the linked list
//     while(temp!=NULL){
//         n++;
//         temp = temp->next;
//     }
    
//     // Calculate the index of the middle node
//     int res = n/2;
    
//     temp = head;
    
//     // Loop to find the
//     // middle node to delete
//     while(temp!=NULL){
//         res --;
//         // If the middle node is found
//         if(res==0){
//             Node* middle = temp->next;
//             temp->next = temp->next->next;
//             free(middle);
//             break;
//         }
//         temp = temp->next;
//     }

//     return head;
// }


// void printLL(Node* head){
    
//     Node *temp = head;
//     while(temp!=NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
//  }

// int main() {
//     // Creating a sample linked list: 
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);
    
//     // Display the orignal linked list
//     cout << "Orginal Linked List: ";
//     printLL(head);

//     // Deleting the middle node
//     head = deleteMiddle(head);

//     // Displaying the updated linked list
//     cout << "Orginal Linked List: ";
//     printLL(head);

//     return 0;
// }


// OPTIMAL APPROACH


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Node class represents a node in a linked list
class Node {
public:

    // Data stored in the node
    int data;  
    
     // Pointer to the next node in the list
    Node* next;     

    // Constructor with both data
    // and next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as
    // a parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to delete the
// middle node of a linked list
Node *deleteMiddle(Node *head) {
    // If the list is empty or has only one node,
    // return NULL as there is no middle node to delete
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    // Initialize slow and fast pointers
    Node* slow = head;
    Node* fast = head;
    fast = head->next->next;

    // Move 'fast' pointer twice as fast as 'slow'
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Delete the middle node by skipping it
    slow->next = slow->next->next;
    return head;
}

void printLL(Node* head){
    
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
 }

int main() {
    // Creating a sample linked list: 
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    // Display the orignal linked list
    cout << "Orginal Linked List: ";
    printLL(head);

    // Deleting the middle node
    head = deleteMiddle(head);

    // Displaying the updated linked list
    cout << "Orginal Linked List: ";
    printLL(head);

    return 0;
}


