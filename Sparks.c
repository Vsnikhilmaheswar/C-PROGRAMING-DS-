#include <stdio.h>
int main()
{
    int array[5][5];
    int row,column,i,j;
    printf("enter the no row");
    scanf("%d",&row);
    printf("Enter the no of columns");
    scanf("%d",&column);

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {   
            printf("enter the %d row and %d column",i,j);
            scanf("%d",&array[i][j]);

        }
    }
    int size=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {   
            if(array[i][j]!=0)
            {
                size++;
            }

        }
    }
    int matrix[3][size];
    int k=0;
    for(i=0;i<row;++i)
    {
        for(j=0;j<column;++j)
        {
            if(array[i][j]!=0)
            {
                matrix[0][k]=i;
                matrix[1][k]=j;
                matrix[2][k]=array[i][j];
                k++;
            }
        }
    }
    for(i=0;i<3;++i)
    {
        for(j=0;j<size;++j)
        {
            printf("%d",matrix[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
