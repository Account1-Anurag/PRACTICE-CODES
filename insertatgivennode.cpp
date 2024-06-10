#include <iostream>

// Define the structure of a doubly linked list node
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to insert a node after a given node at the end of the doubly linked list
void insertAfter(Node* prevNode, int val) {
    if (!prevNode) {
        return; // Invalid input, given node is nullptr
    }
    
    Node* newNode = new Node(val);
    
    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    
    if (prevNode->next) {
        prevNode->next->prev = newNode;
    }
    
    prevNode->next = newNode;
}

// Function to print the doubly linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;  // Initialize an empty doubly linked list

    // Insert elements initially
    head = new Node(3);
    head->next = new Node(7);
    head->next->prev = head;

    // Insert after the given node
    Node* givenNode = head;
    insertAfter(givenNode, 5);
    
    // Print the resulting doubly linked list
    std::cout << "Doubly Linked List: ";
    printList(head);

    return 0;
}
