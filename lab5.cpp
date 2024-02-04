//Write a program in c to show the implementation of Single Linked List.
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to delete a node from the linked list
struct Node* deleteNode(struct Node* head, int value) {
    if (head == NULL) {
        printf("List is empty, cannot delete.\n");
        return head;
    }

    struct Node* current = head;
    struct Node* previous = NULL;

    // If the node to be deleted is the first node
    if (current->data == value) {
        head = current->next;
        free(current);
        printf("Node with value %d deleted successfully.\n", value);
        return head;
    }

    // Search for the node to be deleted
    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    // If the node is not found
    if (current == NULL) {
        printf("Node with value %d not found.\n", value);
        return head;
    }

    // Delete the node
    previous->next = current->next;
    free(current);
    printf("Node with value %d deleted successfully.\n", value);
    return head;
}

// Function to display the linked list
void displayList(struct Node* head) {
    printf("Linked List: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value;
    printf("\t\t***************\n");
    printf("\t\tSingly Linked List\n");
    printf("\t\t***************\n");

    do {
        printf("\n1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete a node\n");
        printf("4. Display the linked list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                break;
            case 2:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;
            case 3:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                head = deleteNode(head, value);
                break;
            case 4:
                displayList(head);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);

    // Free memory before exiting
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

