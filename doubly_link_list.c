#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void create();
void display();
void insertatbeg();
void insertend();
struct node *head, *newnode, *tail;

void main()
{
    create();
    display();
    // insertatbeg();
    // display();
    insertend();
    display();
}
void create()
{
    struct node *temp;
    head = 0;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter a data:\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("do you want to continue?.\n press 1 for continue and 0 for discontinue.\n");
        scanf("%d", &choice);
    }
    tail = newnode;
}
void display()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void insertatbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data to insert at begin:\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void insertend()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data to insert at last:\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
