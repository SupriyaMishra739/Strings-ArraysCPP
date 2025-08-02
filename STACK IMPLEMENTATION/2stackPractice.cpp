#include <iostream>
using namespace std;

class stack
{
    int *arr;
    int size;
    int top;

public:
    stack(int size)
    {
        this->size = size;
        top == -1;
        arr = new int[size];
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "oversflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "underflow" << endl;
            return;
        }
        else
        {
            cout << "data is popped" << arr[top] << endl;
            top--;
        }
    }
    bool isEmpty()
    {
        return top == -1;
    }
    int isPeek()
    {
        return arr[top];
    }
};

int main()
{
    stack s1(4);
    s1.push(1);
    s1.push(2);
    cout << s1.isPeek();
    s1.pop();

    cout << s1.isPeek();
    cout << endl;
    cout << s1.isEmpty();
}