#include <iostream>
using namespace std;
#include <stack>

class Stack
{
    int *arr;
    int top;
    int size;

public:
    Stack(int s)
    {
        this->size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "overflow!!";
            return;
        }

        top++;
        arr[top] = data;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "underflow!!";
            return;
        }
        else
        {
            top--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "underflow!!";
            return;
        }

        cout << arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int isSize()
    {
        return top + 1;
    }
};

int main()
{
    Stack s1(3);
    s1.push(5);
    s1.push(6);
    cout << s1.isEmpty();
    cout << endl;

    cout << s1.isSize();
}