#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
int top = -1, stack[20];
int push();
int pop();
int display();

int main()
{
    int ch = 1, option;
    while (ch == 1)
    {
        printf("Stack Operations\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &option);
        switch (option)
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
            printf("Wrong choice\n");
        }
        printf("Do you want to continue 1-Yes,0-No : ");
        scanf("%d", &ch);
    }
    return 0;
}
int push()
{
    int num;
    if (top == (SIZE - 1))
    {
        printf("Stack is full\n");
        return 0;
    }
    else
    {
        printf("Enter element to insert\n");
        scanf("%d", &num);
        stack[++top] = num;
        return 0;
    }
}
int pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
    {
        printf("Deleted element = %d\n", stack[top]);
        top--;
    }
    return 0;
}
int display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
    {
        printf("Status of Stack is\n");
        for (i = top; i >= 0; i--)
            printf("%d\t", stack[i]);
        printf("\n");
        return 0;
    }
}