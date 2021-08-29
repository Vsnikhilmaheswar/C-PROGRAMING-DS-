#include <stdio.h>
int main()
{
    int num1,num2,result;
    char ch;
    printf("Enter the two numbers  ");
    scanf("%d%d",&num1,&num2);
    printf("Enter an operator ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        result=num1+num2;
        printf("result=%d",result);
        break;
        case '-':
        result=num1-num2;
        printf("result= %d",result);
        break;
        case '*':
        result=num1*num2;
        printf("result= %d",result);
        break;
        case '/':
        result=num1/num2;
        printf("result= %d",result);
        break;
        case'%':
        result=num1%num2;
        printf("result= %d",result);
        break;
       default:
       printf("wrong input");
        
        }
       
        return 0;

}