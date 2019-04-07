#include <bits/stdc++.h> 
  
using namespace std; 
  
// structure of a node 
struct Node { 
    int data; 
    Node* next; 
}; 
  
// function to get a new node 
Node* getNode(int data) 
{ 
    Node* newNode = new Node; 
    newNode->data = data; 
    newNode->next = NULL; 
    return newNode; 
} 
  
// function to delete all the nodes from the list 
// that are greater than the specified value x 
void deleteGreaterNodes(Node** head_ref, int x) 
{ 
    Node *temp = *head_ref, *prev; 
  
    // If head node itself holds the value greater than 'x' 
    while (temp != NULL && temp->data > x) { 
        *head_ref = temp->next; // Changed head 
        free(temp); // free old head 
        temp = *head_ref; // Change temp 
    } 
  
    // Delete occurrences other than head 
    while (temp != NULL) { 
  
        // Search for the node to be deleted,  
        // keep track of the previous node as we  
        // need to change 'prev->next' 
        while (temp != NULL && temp->data <= x) { 
            prev = temp; 
            temp = temp->next; 
        } 
  
        // If required value node was not present 
        // in linked list 
        if (temp == NULL) 
            return; 
  
        // Unlink the node from linked list 
        prev->next = temp->next; 
  
        delete temp; // Free memory 
  
        // Update Temp for next iteration of  
        // outer loop 
        temp = prev->next; 
    } 
} 
  
// function to a print a linked list 
void printList(Node* head) 
{ 
    while (head) { 
        cout << head->data << " "; 
        head = head->next; 
    } 
} 
  
// Driver program to test above 
int main() 
{ 
    // Create list: 7->3->4->8->5->1 
    Node* head = getNode(7); 
    head->next = getNode(3); 
    head->next->next = getNode(4); 
    head->next->next->next = getNode(8); 
    head->next->next->next->next = getNode(5); 
    head->next->next->next->next->next = getNode(1); 
  
    int x = 6; 
  
    cout << "Original List: "; 
    printList(head); 
  
    deleteGreaterNodes(&head, x); 
  
    cout << "\nModified List: "; 
    printList(head); 
  
    return 0; 
} 
