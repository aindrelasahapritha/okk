#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to display all nodes in the linked list starting from the given node
void displayNodes(struct Node* startNode) {
    struct Node* current = startNode;
    while (current != NULL) {
        printf("Node Data: %d\n", current->data);
        current = current->next;
    }
}

int main() {
    struct Node* node1 = createNode(1);
    struct Node* node2 = createNode(2);
    struct Node* node3 = createNode(3);

    // Link the nodes together to form a linked list
    node1->next = node2;
    node2->next = node3;

    // Display all nodes starting from node1
    displayNodes(node1);

    // Free memory for the nodes
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
