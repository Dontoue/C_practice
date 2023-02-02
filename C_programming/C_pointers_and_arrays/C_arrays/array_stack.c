#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100
/*
 * push(): function that adds elements to a stack
 * pop(): function that deletes elements from a stack
 * display(): function that display elements of a stack.
 * main(): implements a stack
 *
 * Return 0 : Success.
 */

/*Global Variable*/
int choice;
int stack[LIMIT];
int i;
int top;

void push(void);
void pop(void);
void display(void);

int main(void)
{
    do
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Sorry invalid choice\n");
            break;
        }
    }while (choice != 4);
    return (0);
}
void push(void)
{
    int element;
    if(top == LIMIT - 1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Enter the element to insert:\n");
        scanf("%d", &element);
        top++;
        stack[top]=element;
    }
}
void pop(void)
{

    int element = stack[top];
    if(top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("The deleted element is %d\n", element);
        top--;
    }
}
void display(void)
{
    if(top == -1)
    {
        printf("Stack Underflow");
    }
    else if (top > 0)
    {
        printf("Elements of the Stack are:\n");
        for(i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}
