#include <iostream>
#include "LinkedList.h"

// Node constructor
Node::Node(int value) : data(value), next(nullptr) {}

// LinkedList constructor
LinkedList::LinkedList() : head(nullptr) {}

// head getter
    Node* LinkedList::getHead() const {
    return head;
}

// Function to insert a new node at the end
void LinkedList::insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void LinkedList::display() {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << "   || ";
        temp = temp->next;
    }
    std::cout<<" "<<std::endl;
}

Node* LinkedList::getTail() const {
    if (!head) {  // Check if the list is empty
        return nullptr;
    }

    Node* temp = head;
    while (temp->next) {  // Traverse to the last node
        temp = temp->next;
    }

    return temp;  // Return the last node
}


// Delete Nth node
void LinkedList::deleteNthNode(int n) {
    if (!head || n <= 0) return; // Check for invalid inputs.

    Node* temp = head;

    // If the head node itself needs to be removed.
    if (n == 1) {
        head = head->next;
        delete temp;
        return;
    }

    // Find the (n-1)th node
    for (int i = 1; i < n - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    // If the (n-1)th node is the last node or n is out of bounds
    if (!temp || !temp->next) return;

    // Remove the nth node
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

// Destructor to clean up memory
LinkedList::~LinkedList() {
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
    }
}
