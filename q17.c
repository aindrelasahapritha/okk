#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the front of the linked list
void insertAtFront(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the rear of the linked list
void insertAtRear(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to insert a node at a specific position in the linked list
void insertAtPosition(struct Node** head, int data, int position) {
    if (position < 0) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 0 || *head == NULL) {
        insertAtFront(head, data);
        return;
    }
    struct Node* newNode = createNode(data);
    struct Node* current = *head;
    int count = 1;
    while (count < position && current->next != NULL) {
        current = current->next;
        count++;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// Function to delete a node at the front of the linked list
void deleteAtFront(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete!\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to delete a node at the rear of the linked list
void deleteAtRear(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete!\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    struct Node* current = *head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

// Function to delete a node at a specific position in the linked list
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete!\n");
        return;
    }
    if (position < 0) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 0) {
        deleteAtFront(head);
        return;
    }
    struct Node* current = *head;
    struct Node* prev = NULL;
    int count = 0;
    while (count < position && current != NULL) {
        prev = current;
        current = current->next;
        count++;
    }
    if (current == NULL) {
        printf("Position not found!\n");
        return;
    }
    prev->next = current->next;
    free(current);
}

// Function to update a node at the front, rear, or a specific position based on position and value
void updateNode(struct Node* head, int position, int newValue) {
    if (head == NULL) {
        printf("List is empty. Nothing to update!\n");
        return;
    }
    if (position < 0) {
        printf("Invalid position!\n");
        return;
    }
    struct Node* current = head;
    int count = 0;
    while (count < position && current != NULL) {
        current = current->next;
        count++;
    }
    if (current == NULL) {
        printf("Position not found!\n");
        return;
    }
    current->data = newValue;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtFront(&head, 1);
    insertAtFront(&head, 2);
    insertAtRear(&head, 3);
    insertAtPosition(&head, 4, 1);

    printf("Original list: ");
    printList(head);

    updateNode(head, 0, 5); // Update at front
    updateNode(head, 2, 6); // Update at rear
    updateNode(head, 1, 7); // Update at specific position

    printf("Updated list: ");
    printList(head);

    deleteAtFront(&head);
    deleteAtRear(&head);
    deleteAtPosition(&head, 1);

    printf("Final list after deletions: ");
    printList(head);

    return 0;
}
