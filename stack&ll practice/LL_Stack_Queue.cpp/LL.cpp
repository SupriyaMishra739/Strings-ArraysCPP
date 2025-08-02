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

class LL
{
public:
    Node *head;

    LL()
    {
        head = NULL;
    }

    void insertNodeAtHead(int data)
    {
        // craete a node

        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }

    // insertAtLast
    void insertAtLast(int data)
    {
        Node *newnode = new Node(data);
        Node *temp = head;
        if (head == NULL)
        {
            insertNodeAtHead(data);
            return;
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        return;
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

    // insert node at a position

    void insertAtPos(int data, int pos)
    {
        Node *newnode = new Node(data);

        // Case 1: Insert at position 1 (i.e., at head)
        if (pos == 1)
        {
            newnode->next = head;
            head = newnode;
            return;
        }

        Node *temp = head;
        int count = 1;
        while (temp != NULL)
        {
            if (count == pos - 1)
            {
                newnode->next = temp->next;
                temp->next = newnode;
                return;
            }
            count++;
            temp = temp->next;
        }
    }
};

int main()
{
    LL ll1;
    ll1.insertNodeAtHead(10);
    ll1.insertNodeAtHead(20);
    ll1.insertNodeAtHead(30);
    ll1.display();
    cout << endl;
    cout << endl;
    cout << endl;
    ll1.insertAtLast(50);
    ll1.display();
    cout << endl;
    cout << endl;
    cout << endl;
    ll1.insertAtPos(100, 4);
    ll1.display();
}