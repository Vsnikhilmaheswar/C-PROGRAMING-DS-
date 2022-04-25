#include<stdio.h>
int b[8];
void merge(int arr[],int ib,int mid,int ub)
{

int  i=ib;
int  j=mid+1;
int k=ib;
while (i<=mid && j<=ub)
{
   if(arr[i]<=arr[j])

{
   b[k]=arr[i];
   k++;i++;
}
else
{
   b[k]=arr[j];
   k++;j++;
}
}
if(i>mid)
{
   while(j<=ub)
   {
      b[k]=arr[j];
      k++;j++;

   }
}
else
{
   while(i<=mid)
   {
      b[k]=arr[i];
      k++;i++;
   }
}
for(k=ib;k<=ub;k++)
{
   arr[k]=b[k];
}
}

void mergesort(int arr[],int ib,int ub)
{
   int mid;
   if(ib<ub)
   {
    mid=(ub+ib)/2;
   mergesort(arr,ib,mid);
   mergesort(arr,mid+1,ub);
   merge(arr,ib,mid,ub);
   }
}
int main()
{
   int count,i;
   printf("enter the size of the array");
   scanf("%d",&count);
   printf("enter the elements");
   int a[count];
   for ( i = 0; i < count; i++)
{
   scanf("%d",&a[i]);
   }
   mergesort(a,0,count);
   printf("Sorted array \n");
for ( i = 0; i < count; i++)
{
   printf("%d",b[i]);
}

}
