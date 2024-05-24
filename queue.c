#include<stdio.h>
#include<stdlib.h>
#define max 5
void enqueue();
void dequeue();
void display();
int front=-1, rear=-1;
int queue[max];
void main()
{
    int ch;
    while(1)
    {
        printf("****QUEUE MENU****\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.exit\n");
        printf("Enter your choice?\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Enter valid choice!");
        }
    }
}
void enqueue()
{
    int item;
    printf("Enter element to insert:");
    scanf("%d",&item);
    if(rear==max-1)
       printf("OVERFLOW, cannot insert!\n");
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
    }
    else
        rear=rear+1;
    queue[rear]=item;
    printf("%d is inserted",&item);
}
void dequeue()
{
    int item;
    if(front==-1||front>rear)
    printf("UNDERFLOW, nothing to delete!\n");
    else
    {
        item = queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front = front + 1;
        printf("Value deleted from the front!");
    }
}
void display()
{
    int i;
    if(rear==-1)
       printf("Empty queue!\n");
    else
    {
        printf("The queue elements are:\n");
        for(i=front;i<=rear;i++)
            printf("%d\n",queue[i]);
    }
}