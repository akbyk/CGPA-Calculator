#ifndef STRINGLINKEDLIST_H
#define STRINGLINKEDLIST_H

#include <string>

using std::string;

// Define the StringNode structure
struct StringNode {
    string data;
    StringNode* next;

    // Inline definition of constructor
    StringNode(const string& value) : data(value), next(nullptr) {}
};

// Define the StringLinkedList class
class StringLinkedList {
private:
    StringNode* head;

public:
    StringLinkedList();
    void insertAtEnd(const string& value);
    void display() const;
    void deleteNthNode( int value);
    StringNode* getHead() const;
    StringNode* getTail() const;
    ~StringLinkedList();
};

#endif // STRINGLINKEDLIST_H
