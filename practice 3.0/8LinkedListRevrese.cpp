#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

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

    // insertAtFront

    void insertAtFront(int data)
    {
        Node *newnode = new Node(data);

        if (head == NULL)
        {
            head = newnode;
            return;
        }
        // 1--> 2--> 3-->NULL
        // 4
        newnode->next = head;
        head = newnode;
        return;
    }

    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            temp = temp->next;
        }
        cout << "NULL ";
    }

    void reveseLinkedList()
    {
        Node *temp = head;
        vector<int> v; // 30 20 10
        int i = 0;
        while (temp != NULL)
        {
            v.push_back(temp->data);
            temp = temp->next;
            i++;
        }
        temp = head;
        // revese array
        reverse(v.begin(), v.end()); // 10 20 30
        i = 0;
        while (temp != NULL)
        {
            temp->data = v[i];
            temp = temp->next;
            i++;
        }
    }
};

int main()
{
    LL l1;
    l1.insertAtFront(10);
    l1.insertAtFront(20);
    l1.insertAtFront(30); // 30 20 10--> 10 20 30
    l1.display();
    // revrse LL
    cout << endl;
    cout << "reverse" << endl;

    l1.reveseLinkedList();
    l1.display();
}
