#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *newNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to search for x in the linked list
struct Node *searchNode(struct Node *head, int x)
{
    struct Node *current = head;

    // Traverse the linked list
    while (current != NULL)
    {
        // If current node's data is equal to x, return the current node
        if (current->data == x)
        {
            return current;
        }
        current = current->next;
    }

    // If x is not found, return NULL
    return NULL;
}

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to test the searchNode function
int main()
{
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    printf("Original linked list: ");
    printList(head);

    int x = 3;
    struct Node *result = searchNode(head, x);
    if (result != NULL)
    {
        printf("Node with value %d found at address: %p\n", x, (void *)result);
    }
    else
    {
        printf("Node with value %d not found\n", x);
    }

    x = 6;
    result = searchNode(head, x);
    if (result != NULL)
    {
        printf("Node with value %d found at address: %p\n", x, (void *)result);
    }
    else
    {
        printf("Node with value %d not found\n", x);
    }

    return 0;
}
