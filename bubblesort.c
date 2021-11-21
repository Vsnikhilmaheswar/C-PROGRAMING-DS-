#include<stdio.h>
int main()
{
    int i,j=0,arr[10],size,temp;
    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("enter the %d elements of the array",size);
 for(i=0;i<size;i++)
 {
    scanf("%d",&arr[i]);
}
for(i=0;i<size-1;i++)
{
    
    for(j=0;j<size-1;j++)
    {
        if(arr[j]>arr[j+1])
    {
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
    }
    }

    }
    for(i=0;i<size;i++)
 {
    printf("%d  ",arr[i]);
}
}
