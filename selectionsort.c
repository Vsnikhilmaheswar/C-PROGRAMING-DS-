
#include<stdio.h>
int main()
{
    int i,j,size,temp,min;
    printf("enter the size of the array");
    scanf("%d",&size);
int arr[size];
printf("the %d elements");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}    
for ( i = 0; i < size-1; i++)
{
    min=i;
    for(j=i+1;j<size;j++)
    {
        if(arr[j]<arr[min])
        {
        min=j;}
    }
    if(min!=i)
    {
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

}
printf("sorted array :");
for(i=0;i<size;i++)
{
    printf("%d",arr[i]);
} 
}
