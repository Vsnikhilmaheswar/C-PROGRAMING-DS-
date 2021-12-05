#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size],top=-1;
 void push()
 {
     int x;
     printf("enter element to push\n");
     scanf("%d",&x);
     if(top==size-1)
     {
         printf("stack is overflow you cant push \n");
     }
     else 
     {
         top++;
         stack[top]=x;
     }
 }
 void pop()
 {
     int item;
     if(top==-1)
     {
         printf("stack is underflow\n");
     }
     else
     {
         item=stack[top];
         top--;
         printf("poped item = %d\n",item);
     }
 }
 void peak()
 {
     if(top==-1)
     {
         printf("stack is empty\n\n");
     }
     else
     {
         printf("\t%d",stack[top]);
     }
 }
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty \n\n");
    }
    else
 {   
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
 }
}
int main()
{

    int opt;

    while(1)
    {
        printf("1.push\n2.pop\n3.peak\n4.display\n5.exit\n");
        scanf("%d",&opt);
        
    
    switch (opt)
        {
        case 1:push();
         break;
         case 2:pop();
         break;
         case 3:peak();
         break;
         case 4:display();
         break;
         case 5:exit(0);
        default:
        printf("invalid input");
            break;
       }
  }
  return 0;
}

