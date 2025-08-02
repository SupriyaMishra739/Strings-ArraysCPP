#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack
{
public:
    Node *top;
    int size;

    Stack()
    {
        size = 0;
        top = NULL:
    }

    // void push
    void push(int data)
    {
        Node *newnode = new Node(data);
        temp->next = top;xsd
        top = temp;

        size++;
    }
};

int main()
{
}