#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constrctor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class ll
{
public:
    Node *head;

    ll()
    {
        head = NULL;
    }

    // create a node

    void createNodeAtstart(int data)
    {
        Node *newnode = new Node(data);

        newnode->next = head;
        head = newnode;
    }

    void addNodeAtEnd(int data)
    {
        Node *newnode = new Node(data);
        Node *temp = head;
        if (head == NULL)
        {
            head = newnode;
            return;
        }

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    ll l1;
    l1.createNodeAtstart(10);
    l1.createNodeAtstart(100);
    l1.addNodeAtEnd(20);

    l1.display();
}