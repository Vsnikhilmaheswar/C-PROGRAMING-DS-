#include<stdio.h>
int main()
{
    int num,mid,i,size,a[10],key,first,end,flage=0;
    printf("enter the size of array ");
    scanf("%d",&size);
    printf("enter the %d elements of array  ",size);
    for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the element to be founded ");
scanf("%d",&key);
first=0;
end=size-1;
for(first=0;first<=end;first++)
{
    mid=(first+end)/2;
    if(key<a[mid])
    {
end=mid-1;
    }
    else 
    if(key>a[mid])
    {
        first=mid+1;
    }
    else if(key==a[mid])
    {
printf("element found at position %d  ",mid+1);
flage=1;
    }
}
if(flage==0)
{
    printf("element not found");
}
return 0;
}

