//Write a program in c showing the concept of Circular Queue.
#include <iostream>
#define max_size 4


int circular_queue[max_size];
int front = -1, rear = -1;

void enqueue(int value) {
    if (front == (rear+1)%max_size) {
        printf("Queue is full\n\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear  = (rear + 1)%max_size;
        circular_queue[rear] = value;
        printf("%d is enqueued into the queue\n\n",value);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n\n");
    } else {
        front =(front + 1)%max_size;
        printf("%d is dequeued successfully\n\n",front);
    }
}
int i;
void display() {
    if (front == -1)  {
        printf("Queue is empty\n\n");
        return;
    }
    for (i = front; i <=rear; i++) {
        printf("%d\t",circular_queue[i]);
        
    }
    printf("\n");
}

int main() {
    int ch, value;
    printf("\t\t****************\n");
    printf("\t\tCircular Queue\n");
    printf("\t\t****************\n");
    while (1) {
        printf("Program Menu\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter the choice:\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                printf("Enter an element:\n");
                scanf("%d",&value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid Choice\n");
                break;
        }
    }
}
sd