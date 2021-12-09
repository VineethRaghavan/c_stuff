#include <stdio.h>
#include<stdlib.h>
#define SIZE 20
int rear = -1, front = -1, queue[10];

int qinsert();
int qdelete();
int qdisplay();

int main()
{
    int ch = 1, option;
    while (ch == 1)
    {
        printf("Queue Operations\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice \n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            qinsert();
            break;
        case 2:
            qdelete();
            break;
        case 3:
            qdisplay();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice\n");
        }
        printf("Do you want to continue 1-Yes,0-No\n");
        scanf("%d", &ch);
    }
    return 0;
}
int qinsert()
{
    int num;
    if (rear == (SIZE - 1))
    {
        printf("Queue is full\n");
        return 0;
    }
    printf("Enter element to insert\n");
    scanf("%d", &num);
    queue[++rear] = num;
    if (front == -1)
        front++;
    return 0;
}
int qdelete()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return 0;
    }
    if (front == rear)
    {
        printf("Deleted element = %d\n", queue[front]);
        front = -1;
        rear = -1;
        return 0;
    }
    printf("Deleted element = %d\n", queue[front]);
    front++;
    return 0;
}
int qdisplay()
{
    int i;
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return 0;
    }
    printf("Status of queue is\n");
    for (i = front; i <= rear; i++)
        printf("%d\t", queue[i]);
    printf("\n");
    return 0;
}