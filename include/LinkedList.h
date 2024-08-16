#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Define the Node structure
struct Node {
    int data;
    Node* next;

    Node(int value);
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    void insertAtEnd(int value);
    void display();
    void deleteNthNode(int value);
    Node* getHead() const;
    Node* getTail() const;

    ~LinkedList();
};

#endif // LINKEDLIST_H
