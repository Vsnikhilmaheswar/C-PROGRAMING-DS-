#include<stdio.h>
struct poly
{
int exp;
int coeff;
};
struct poly a[10];
int main()
{
    int pow,i;
    printf("enter the heighest power");
    scanf("%d",&pow);
    for ( i = pow; i >=0; i--)
    
    {
        printf("enter the coeff of exponent %d",i);
        
        scanf("%d",&a[i].coeff);
        a[i].exp=i;
    }
        for ( i = pow; i >=0; i--)
        {
            printf("%dX^%d+",a[i].coeff,a[i].exp);
        }
printf("0");
}

