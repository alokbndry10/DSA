//Write a program to show the push( ), pop( ) and display of elements in stack
#include<stdio.h>
#include<conio.h>
#define max_size 4

int top = -1;
int value;
int count = 0;
int ch;

void push(int stack[], int value) {
    if (top == (max_size - 1)) {
        printf("Stack overflow\n");
    } else {
    	printf("%d is pushed into stack",value);
        top++;
        stack[top] = value;
        count++;
    }
}

void pop(int stack[]) {
    if (top == -1) {
        printf("Stack is underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
        count--;
    }
}

int i;
void display(int stack[]) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--) {
            printf("%d\t", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("\t\t****************\n");
    printf("\t\tSTACK OPERATIONS\n");
    printf("\t\t****************\n");
    int stack[max_size];
    int ch, value;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter the number to perform the desired stack operation: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to push into the stack: ");
                scanf("%d", &value);
                push(stack, value);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                printf("Exit from the program\n");
                return 0;
            default:
                printf("Invalid choice entered\n");
                break;
        }
    }
}
