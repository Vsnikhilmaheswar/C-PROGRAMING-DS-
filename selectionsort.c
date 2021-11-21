#include<stdio.h>
int main()
{
    int i,limit,j,arr[10],temp;
    printf("Enter the limit of the array");
    scanf("%d",&limit);
    printf("enter the %d elements of the array ",limit);
    for(i=0;i<limit;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("SORTED ARRAY USING SELECTION SORTING : ");
    for (i = 0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
           if(arr[i]>arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
        }
    }
    for (i = 0; i < limit; i++)
    {
        printf("%d\t",arr[i]); 
    }
return 0;
}