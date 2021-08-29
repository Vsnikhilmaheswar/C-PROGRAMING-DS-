#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2,real,img;
    printf("Enter the coefficient of x square\n");
    scanf("%f",&a);
    printf("Enter the coefficient of x \n");
    scanf("%f",&b);
    printf("Enter the coefficient of constant \n");
    scanf("%f",&c);
    discriminant=(b*b)-(4*a*c); //To find nature of the root
    if(discriminant>0) // two real roots
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("root 1 =   %f",root1);
        printf("\troot 2 =   %f",root2);
    }
    else if(discriminant==0) // one real root
    {
        root1=root2=-b/(2*a);
        printf("root 1 = root 2 = %f",root1);
    }
    else if (discriminant<0)// complex roots                   
    {
        real=-b/(2*a);
        img=sqrt(-discriminant)/(2*a);
        printf("root1 = %f+%fi and root2 = %f-%fi", real, img, real, img);
    }
    return 0;
}