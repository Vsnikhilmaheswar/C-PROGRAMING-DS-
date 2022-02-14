#include<stdio.h>
struct poly{
int exp;
int coeff;
}
a[10];

int main()
{
int num,i,k=0;
printf("Enter the highest power \n");
scanf("%d",&num);
printf("Enter the constants\n");
for(i=0;i<=num;++i)
{
printf("Enter the x^%d constant",i);
scanf("%d",&a[i].coeff);
a[k++].exp=i;
}
printf("%d",a[0].coeff);

for(i=1;i<=num;++i)
{
printf("+%dx^%d",a[i].coeff,a[i].exp);
}
}
