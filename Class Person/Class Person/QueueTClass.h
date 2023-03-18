#include <iostream>
using namespace std; 


template <class Queue>class stack
{
private:
    Queue* arr;
    Queue size;
    Queue top;

public:
    stack(Queue a) : arr(a) {}
    stack(Queue s) :size(s) {}
    stack(Queue t) :top(t) {}

    Queue IsEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;

        }
    }
    Queue IsFull()
    {
        if (top > 10)
        {
            return true;
        }
        else
        {
            return false;

        }

    }
    Queue push(Queue n)
    {
        if (IsFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = n;
        }
    }
    Queue pop()
    {
        if (IsEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top--];

        }
    }

};

