#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100 // Maximum size of the stack

struct Stack
{
    int array[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initializeStack(struct Stack *stack)
{
    stack->top = -1; // Empty stack condition
}

// Function to check if the stack is empty
bool isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// Main function to test isEmpty function
int main()
{
    struct Stack stack;
    initializeStack(&stack);

    if (isEmpty(&stack))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }

    return 0;
}
