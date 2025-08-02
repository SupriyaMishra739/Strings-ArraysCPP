#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LL
{
public:
    Node *head;

    LL()
    {
        head = NULL;
    }

    // add at front
    void addAtFront(int data)
    {
        Node *newnode = new Node(data);

        if (head == NULL)
        {
            head = newnode;

            return;
        }
        newnode->next = head;
        head = newnode;
    }

    // display
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

    LL l1;
    l1.addAtFront(10);
    l1.addAtFront(20);
    l1.addAtFront(30);
    l1.display();
}