#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class stack
{
public:
    Node *top;
    stack()
    {
        top = NULL;
    }
    void push(int data)
    { // insert at first
        Node *temp = new Node(data);
        if (top == NULL)
        {
            head = temp;
            return;
        }
        temp->next = top;
        top = temp;
    }

    void pop(){//remove 1st node
        Node* temp=top;
        if(top==NULL){
            return;
        }
        
        top=top->next;
        remove(temp);

    }
};

int main()
{
}