#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(newNode));
    if (newNode == NULL)
    {
        printf("Stack Overflow :");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = top;
    top = newNode;
}

void print()
{
    struct node *temp;
    temp = top;
    printf("Elements are :\n");
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int choice, d;
    while (1)
    {
        printf("\nEnter 1 : push");
        printf("\nEnter 2 : print");
        printf("\nEnter 3 : exit");
        printf("\nEnter your choice\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data :\n");
            scanf("%d", &d);
            push(d);
            break;
        case 2:
            print();
            break;
        default:
            print("Invalid choice");
            break;
        }
    }
    return 0;
}