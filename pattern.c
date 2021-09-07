#include<stdio.h>
int main()
{
    int i, j, row, k=0;
    printf("\n Enter the value of row : ");
    scanf("%d", &row);

    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            
            printf(" %d ",k++);
        }
        printf("\n");
    }
  return 0;  
}