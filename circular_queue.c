#include<stdio.h>
#include<stdlib.h>
int cqueue[20],size,front=-1,rear=-1;

void enqueue()
{
    int item;
    printf("enter the item do u want to insert");
    scanf("%d",&item);
     if(front==0 && rear==size-1 || front==rear+1)
    {
    printf("overflow");
    }else
    {
  if(front==-1)
 {
    front=rear=0;
 }
  else
  {
    rear=(rear+1)%size;
   }
 cqueue[rear]=item;
    }
}
void dequeue()
{
    int item;
    if( front==-1)
    {
printf("queue is empty");
    }
    else
    {item=cqueue[front];
        if(front==rear)
        {
            rear=front=-1;
        }
        else
        {
            front=(front+1)%size;
        }
        printf("item poped=%d",item);
    }
}
void display()
{int i;
    if(front==-1)
    {
        printf("queue is empty");
    }else
    {
        if(rear>=front)
        {
            for ( i = front; i <=rear; i++)
            {
                printf("%d",cqueue[i]);
            }
            printf("\n");
            
        }else
        {
            for(i=front;i<size;i++)
            {
                printf("%d",cqueue[i]);
            }
            for ( i = 0; i <= rear; i++)
            {
            
                printf("%d",cqueue[i]);
            }
            printf("\n");
        }
    }

    }
int main()
{
    int opt;
     printf("enter size of the array \n");
     scanf("%d",&size);
    while(1)
    {
        printf("\n1.push\n2.pop\n3.peak\n4.display\n5.exit\n");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:enqueue();
         break;
         case 2:dequeue();
         break;
       //  case 3:peak();
      //   break;
        case 3:display();
      break;
         case 4:exit(0);
         break;
        default:
        printf("invalid input");
            break;
       }
  }
}
