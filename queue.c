/* ###################################################*/
/*  AUTHOR:  VS NIKHIL MAHESWAR                       */        
/*                                                    */
/* PROGRAM : Implementation-of-queue                  */
/*                                                    */          
/*  DATE   : 10-12-2021                               */
/*####################################################*/
#include<stdio.h>
#include<stdlib.h>
int queue[100],rear=-1,size,front=-1;
int main()
{
    int op;
    printf("Enter the si1ze of the queue : ");
    scanf("%d",&size);
     while(1)
    {
        printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:enqueue();
         break;
         case 2:dequeue();
         break;
         case 3:display();
         break;
         case 4:exit(0);
        default:
        printf("\n!!!invalid input!!!\n");
            break;
       }
    }
}
void enqueue()
{
    int item;
    printf("enter the element to insert");
    scanf("%d",&item);
    if(rear==size-1)
    {
        printf("overflow");
    }
    else
    {
    if(rear==-1)
    {
        front=rear=0;
    }
    else
    rear++;
    queue[rear]=item;
}
}
void dequeue()
{
    int item;
    if(rear==-1)
    {
        printf("underflow");
    }
    else
    {
        item=queue[front];
        printf("deleted item = %d",item);
    }
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void display()
{
    int i;
    if(rear==-1)
    {
        printf("queue is empty \n\n");
    }
    else
  {   
    for(i=front;i<=rear;i++)
    {
        printf("\t%d",queue[i]);
    }
  }
}
