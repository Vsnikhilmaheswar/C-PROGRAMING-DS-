#include<stdio.h>
int arr[5];
int partion(int arr[],int lower,int upper)
{
    int temp;
    int start=lower;
    int end= upper;
    int pivote=arr[lower];
    while(start<end)
    {
        while(arr[start]<=pivote)
        {
            start++;
        }
        while(arr[end]>pivote)
        {
            end--;
        }
        if(start<end)
        {
           temp= arr[start];
           arr[start]=arr[end];
           arr[end]=temp;
        }
    }
    temp=arr[lower];
    arr[lower]=arr[end];
    arr[end]=temp;
    return end;
}
void quicksort(int arr[],int lower,int upper)
{int i;
    int loc; 
    if(lower<upper)
    {
loc=partion(arr,lower,upper);
quicksort(arr,lower,loc-1);
quicksort(arr,loc+1,upper);
    }
    
}
int main()
{
    int i,limit;
    printf("enter the size of the array");
    scanf("%d",&limit);
   int arr[limit];
   printf("enter the elements of the array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,limit);
    printf("sorted array");
for(i=0;i<limit;i++)
    {
        printf("%d",arr[i]);
    }
}
