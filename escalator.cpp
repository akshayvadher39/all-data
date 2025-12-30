#include <iostream>
using namespace std;

class Stack
{
private:
    int stack[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top == 4)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            stack[top] = x;
            cout << "Value pushed" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Value popped: " << stack[top] << endl;
            top--;
        }
    }

    void showTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Top value is: " << stack[top] << endl;
        }
    }

    void checkEmpty()
    {
        if (top == -1)
            cout << "Stack is empty" << endl;
        else
            cout << "Stack is not empty" << endl;
    }

    void checkFull()
    {
        if (top == 4)
            cout << "Stack is full" << endl;
        else
            cout << "Stack is not full" << endl;
    }
};

int main()
{
    Stack s;
    int choice, value;

    do
    {
        cout << endl << "1. Push";
        cout << endl << "2. Pop";
        cout << endl << "3. Show Top";
        cout << endl << "4. Check Empty";
        cout << endl << "5. Check Full";
        cout << endl << "6. Exit";
        cout << endl << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
        }
        else if (choice == 2)
        {
            s.pop();
        }
        else if (choice == 3)
        {
            s.showTop();
        }
        else if (choice == 4)
        {
            s.checkEmpty();
        }
        else if (choice == 5)
        {
            s.checkFull();
        }
        else if (choice == 6)
        {
            cout << "Exit" << endl;
        }
        else
        {
            cout << "Wrong choice" << endl;
        }

    } while (choice != 6);

    return 0;
}
