#include <iostream>
using namespace std;

#define size 5

int queue[size];
int front = -1, rear = -1;

void enqueue() {
    int value;
    if (rear == size - 1) {
        cout << "queue is full" << endl;
    } else {
        cout << "enter value: ";
        cin >> value;

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
        cout << "inserted successfully" << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "queue is empty" << endl;
    } else {
        cout << "deleted: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "queue is empty" << endl;
    } else {
        cout << "queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void update() {
    int pos, value;
    display();

    cout << "enter position start to 0 index: ";
    cin >> pos;

    if (pos < front || pos > rear) {
        cout << "invalid Position" << endl;
    } else {
        cout << "enter new value: ";
        cin >> value;
        queue[pos] = value;
        cout << "updated Successfully" << endl;
    }
}

void bubbleSort() {
    for (int i = front; i <= rear; i++) {
        for (int j = front; j < rear; j++) {
            if (queue[j] > queue[j + 1]) {
                int temp = queue[j];
                queue[j] = queue[j + 1];
                queue[j + 1] = temp;
            }
        }
    }
    cout << "queue is sorted successfully" << endl;
}

int main() {
    int choice;

    do {
        cout << " ================== queue project menu ==================" << endl << endl;
        cout << "1. insert (enqueue)" << endl;
        cout << "2. delete (dequeue)" << endl;
        cout << "3. display queue" << endl;
        cout << "4. update element" << endl;
        cout << "5. bubble sort queue" << endl;
        cout << "6. exit" << endl;
        cout << " Enter your choice: "  <<endl <<endl;
        cin >> choice;

        switch (choice) {
            case 1: enqueue(); 
                break;
            
            case 2: dequeue();
                break;
            
            case 3: display();
                break;
            
            case 4: update(); 
                break;
            
            case 5: bubbleSort(); 
                break;
            
            case 6: cout << "program Exit" << endl; 
                break;
            
            default: cout << "invalid Choice" << endl;
        }

    } while (choice != 6);

    return 0;
}



