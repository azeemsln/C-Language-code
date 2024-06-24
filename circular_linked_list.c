#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head, *tail;
void create()
{
    head = 0;
    int choice = 1;
    struct node *newnode, *temp;
    while (choice)
    {

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:\n");
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
        printf("do you want to cotinue.\npress 1 to continue or 0 to stop.");
        scanf("%d", &choice);
    }
    tail = newnode;
    tail->next = head;
}
void display()
{
    struct node *temp;
    temp = head;
    for (temp; temp != tail; temp = temp->next)
    {
        printf("%d ", temp->data);
    }
    printf("%d", temp->data);
}
int main()
{
    create();
    display();
}