//Write  a program in c to show the disadvantage of linear queue
#include<stdio.h>
#include<conio.h>
#define max_size 4

int queue[max_size];
int front = -1, rear = -1; // Initialize front and rear
int i;

void enqueue(int value) {
    if (rear == (max_size - 1)) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d enqueued successfully\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. Cannot dequeue.\n");
        front = rear = -1; // Reset front and rear when the queue becomes empty
    } else {
        printf("%d is dequeued successfully\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        for (i = front; i <= rear; i++) {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("\t\t****************\n");
    printf("\t\tQUEUE OPERATIONS\n");
    printf("\t\t****************\n");
    int ch;
    int value;
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit from the program\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (ch != 4);
    return 0;
}
