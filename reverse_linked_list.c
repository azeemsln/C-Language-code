#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void reverse(struct node *head)
{
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = head;
    nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
    struct node *temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void main()
{

    struct node *head, *newnode, *temp;
    head = 0;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data.\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == 0)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    int choice;
    // printf("Enter '1' to continue. \nEnter '0' to end.");
    // scanf("%d", &choice);
    temp = head;
    while (choice)
    {
        printf("\nEnter '1' to continue. \nEnter '0' to end.\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter a data.\n");
            scanf("%d", &newnode->data);
            newnode->next = 0;
            if (head == 0)
            {
                head = temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
        }
        else
        {
            break;
        }
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    reverse(head);
}