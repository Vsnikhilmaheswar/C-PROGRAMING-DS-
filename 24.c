#include<stdio.h>
int main()
{
    float loss,profit,cost_price,selling_price;
    printf("enter the cost price of the item\t");
    scanf("%f",&cost_price);
    printf("enter thes selling price of the item\t");
    scanf("%f",&selling_price);
    if (selling_price>cost_price)
    {
        profit=selling_price-cost_price;
        printf("Seller earned proft of Rs %f",profit);
    } else if (selling_price<cost_price)
    {
        loss=cost_price-selling_price;
        printf("seller lost Rs %f",loss);
    } else if(selling_price=cost_price)
    {
        printf("The seller has not  made  profit or loss  ");
    }
    return 0;
}