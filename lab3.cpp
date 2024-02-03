#include<iostream>
using namespace std;

const int MAX_SIZE = 5;
int r = -1; 
int x=1;
int f = -1;
int a[MAX_SIZE];
bool isEmpty() {
    return f == -1 && r == -1;
}
bool isFull() {
    return (r + 1) % MAX_SIZE == f;
}
void enqueue(int element) {
    x++;
    if (isFull()) {
        cout << "Error: Queue is full. Cannot enqueue." << endl;
        return;
    }
    if (isEmpty()) {
        f = 0;
    }
    r = (r + 1) % MAX_SIZE;
    a[r] = element;
    cout << "Enqueued: " << element << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Error: Queue is empty. Cannot dequeue." << endl;
        return;
    }

    cout << "Dequeued: " << a[f] << endl;
    if (f == r) {
        f = r = -1;
    } else {
        f = (f + 1) % MAX_SIZE;
    }
}
void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue elements: ";
    int i = f;
    while (true) {
        cout << a[i] << " ";

        if (i == r) {
            break;
        }

        i = (i + 1) % MAX_SIZE;
    }

    cout << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "Press 1 to enqueue, press 2 to dequeue, press 3 to display, or press 4 to terminate: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if(x > 5){
                    cout<<"the queue is full";
                }else{
                int element;
                cout << "Enter element to enqueue: ";
                cin >> element;
                enqueue(element);
                break;
                }
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Program terminated." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
