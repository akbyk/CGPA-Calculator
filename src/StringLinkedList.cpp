#include "StringLinkedList.h"
#include <iostream>

// StringLinkedList constructor
StringLinkedList::StringLinkedList() : head(nullptr) {}

// head getter
StringNode* StringLinkedList::getHead() const {
    return head;
}

// Function to insert a new node at the end
void StringLinkedList::insertAtEnd(const string& value) {
    StringNode* newNode = new StringNode(value);
    if (!head) {
        head = newNode;
        return;
    }
    StringNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void StringLinkedList::display() const {
    StringNode* temp = head;
    while (temp) {
        std::cout << temp->data << "   || ";
        temp = temp->next;
    }
    std::cout << " " << std::endl;
}

// Delete Nth node (here, n is the position, 1-based index)
void StringLinkedList::deleteNthNode(int n) {
    if (!head || n <= 0) return; // Check for invalid inputs.

    StringNode* temp = head;

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
    StringNode* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

StringNode* StringLinkedList::getTail() const {
    if (!head) {
        return nullptr;
    }

    StringNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    return temp;
}




// Destructor to clean up memory
StringLinkedList::~StringLinkedList() {
    StringNode* temp;
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
    }
}
