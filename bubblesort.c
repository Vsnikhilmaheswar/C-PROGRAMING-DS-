#include <stdio.h>
int main()
{
  int i, j , arr[10], size, temp, count = 0, space = 20;
  printf("Enter the size of the array");
  scanf("%d", &size);
  space=space+size*4;
  printf("enter the %d elements of the array", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
    count++;
  }
  count++;
  for (i = 0; i < size - 1; i++)
  {
count++;
    for (j = 0; j < size - 1; j++)
    {
      count++;
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        count=+3;
      }
    }
    count++;
  }
  count++;
  for (i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
    printf("\n");
    count++;
  }
  count++;
printf("the time compleity =%d\n",count);
printf("the space compleity =%d\n",space);

}
