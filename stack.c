#include<stdio.h>
#include<stdlib.h>
#define max 5
void push();
void pop();
void display();
int stack[max],i,top=-1;
void main()
{
    int ch;
    while(1)
    {
        printf("*****STACK MENU*****\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice?\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Enter a valid choice!\n");
        }
    }
}
void push()
{
    int item;
    if(top>=max)
       printf("Stack is full, cannot insert.");
    else
    {
        printf("Enter value to insert:\n");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("Value inserterd!\n");
    }
}
void pop()
{
    if(top==-1)
       printf("Stack is empty, nothing to delete.");
    else
    {
        printf("%d is deleted", stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
       printf("Empty stack!");
    else
    {
        printf("Stack elements are:\n");
        for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}