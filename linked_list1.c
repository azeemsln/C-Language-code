#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
    struct node
    {
        int data;
        struct node *next;
    };
void InsertAtbegin(struct node *head, struct node *newnode, struct node *temp)
{
    // struct node *head, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data you want to insert at begining.\n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void InsertAtEnd(struct node *head, struct node *newnode, struct node *temp)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data you want to insert at End.\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
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
    InsertAtbegin(head, newnode, temp);
    InsertAtEnd(head, newnode, temp);
    // struct node *head, *newnode;
    // newnode = (struct node *)malloc(sizeof(struct node));
    // printf("Enter a data you want to insert.");
    // scanf("%d", &newnode->data);
    // newnode->next = head;
    // head = newnode;
    // temp = head;
    // while (temp != 0)
    // {
    //     printf("%d ", temp->data);
    //     temp = temp->next;
    // }
}