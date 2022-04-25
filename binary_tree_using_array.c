#include<stdio.h>

void buildtree(int a[],int i, int item)
{
    int ch;
    int val;
    a[i]=item;
    printf("do u want to create left child for %d(1/0)",item);
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n Enter the left child:");
        scanf("%d",&val);
        buildtree(a,2*i,val);
    }
    printf("do u want to insert right child for%d(1/0)",item);
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("enter the right child");
        scanf("%d",&val);
        buildtree(a,2*i+1,val);
    }

}
 void main()
 {
     int a[100],item,i;
     for(i=0;i<100;i++)
 {
     a[i]=-1;
 }
 printf("enter the root node");
 scanf("%d",&item);
 buildtree(a,1,item);
 printf("\ntree =");
 for(i=1;i<=16;i++)
 {
     if(a[i]==-1)
     
     printf(" - ");
     else
     printf("%d ",a[i]);
 
 }
 }
