#include<stdio.h>
int main(void)
{
    int age;
    printf("Enter The Your Age\t");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Congralations! You are eligible for casting your vote");
    }
    else{
        printf(" You are not eligible for casting your vote");
    }
}