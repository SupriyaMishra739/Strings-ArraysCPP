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

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    // insertNode at start
    void insertNodeAtStart(int data)
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

    void display()
    {

        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insertNodeAtStart(12);
    ll.display();
}