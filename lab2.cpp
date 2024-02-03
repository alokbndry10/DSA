#include<iostream>
using namespace std;

const int MAX_SIZE = 100;

int n = 0; // Initialize n to 0
int a[MAX_SIZE];

void push() {
    if (n == MAX_SIZE) {
        cout << "Error: Stack overflow." << endl;
        return;
    }

    cout << "Enter element to push: ";
    cin >> a[n];
    n++;
}

void display() {
    if (n == 0) {
        cout << "Stack is empty." << endl;
        return;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << "Element " << n - i - 1 << " = " << a[i] << endl;
    }
}

void pop() {
    if (n == 0) {
        cout << "Error: Stack underflow." << endl;
        return;
    }

    n--;
    cout << "Element popped." << endl;
}

int main() {
    int choice;

    while (true) {
        cout << "Press 1 to push, press 2 to pop, press 3 to display, or press 4 to terminate: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
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
