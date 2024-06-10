#include <iostream>

// Define the structure of a doubly linked list node
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to insert a node at the beginning of the doubly linked list
void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head) {
        head->prev = newNode;
    }
    head = newNode;
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

    // Insert elements at the beginning
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 7);
    insertAtBeginning(head, 1);

    // Print the resulting doubly linked list
    std::cout << "Doubly Linked List: ";
    printList(head);

    return 0;
}
