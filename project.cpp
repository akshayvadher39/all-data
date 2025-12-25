#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

void insertAtBeginning(Node* &HEAD, int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = HEAD;
    HEAD = newNode;

    cout << "\t\tNode inserted at beginning." << endl;
}

void updateNode(Node* HEAD, int oldValue, int newValue)
{
    Node* temp = HEAD;

    while (temp != NULL)
    {
        if (temp->data == oldValue)
        {
            temp->data = newValue;
            cout << "\t\tValue updated successfully." << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "\t\tValue not found." << endl;
}

void deleteNode(Node* &HEAD, int value)
{
    if (HEAD == NULL)
    {
        cout << "\t\tList is empty." << endl;
        return;
    }

    if (HEAD->data == value)
    {
        Node* temp = HEAD;
        HEAD = HEAD->next;
        delete temp;
        cout << "\t\tNode deleted successfully." << endl;
        return;
    }

    Node* prev = HEAD;
    Node* curr = HEAD->next;

    while (curr != NULL)
    {
        if (curr->data == value)
        {
            prev->next = curr->next;
            delete curr;
            cout << "\t\tNode deleted successfully." << endl;
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    cout << "\t\tValue not found." << endl;
}

void reverseList(Node* &HEAD)
{
    Node* prev = NULL;
    Node* curr = HEAD;
    Node* nextNode = NULL;

    while (curr != NULL)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    HEAD = prev;
    cout << "\t\tLinked list reversed." << endl;
}

void display(Node* HEAD)
{
    if (HEAD == NULL)
    {
        cout << "\t\tList is empty." << endl;
        return;
    }

    Node* temp = HEAD;
    cout << "\t\tLinked List: ";
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}

int main()
{
    Node* HEAD = NULL;
    int choice, value, oldValue, newValue;

    do
    {
        cout << endl<< endl;
        cout << "\t--- Linked List Menu ---" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Update Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Reverse List" << endl;
        cout << "5. Display List" << endl;
        cout << "6. Exit" << endl<< endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value : ";
            cin >> value;
            insertAtBeginning(HEAD, value);
            break;

        case 2:
            cout << "Enter old value : ";
            cin >> oldValue;
            cout << "Enter new value : ";
            cin >> newValue;
            updateNode(HEAD, oldValue, newValue);
            break;

        case 3:
            cout << "Enter value to delete : ";
            cin >> value;
            deleteNode(HEAD, value);
            break;

        case 4:
            reverseList(HEAD);
            break;

        case 5:
            display(HEAD);
            break;

        case 6:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

       return 0;
}