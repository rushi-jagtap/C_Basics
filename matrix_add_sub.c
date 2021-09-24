#include<stdlib.h>
#include<stdio.h>
int main()
{
    int row, colomn, i, j;
    printf("\n Enter the value of row and colomn : \n");
    scanf("%d %d", &row, &colomn);

    int matrix_1[row][colomn], matrix_2[row][colomn];
    int add[row][colomn], sub[row][colomn];   
    
    printf("\n Enter the 1st matrix data : \n");    
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= colomn; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
        
    }
    printf("\n 1st matrix : \n");
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= colomn; j++)
        {
            printf("\t%d", matrix_1[i][j]);
        }
     printf("\n");
    }
    
    printf("\n Enter the 2st matrix data : \n");    
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= colomn; j++)
        {
            scanf("%d", &matrix_2[i][j]);
        }
        
    }
    printf("\n 2st matrix : \n");
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= colomn; j++)
        {
            printf("\t%d", matrix_2[i][j]);
        }
     printf("\n");
    }

     printf("\nAddition of 1st and 2d matrix : \n");    
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= colomn; j++)
        {
            add[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
        
    }
   
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= colomn; j++)
        {
            printf("\t%d", add[i][j]);
        }
     printf("\n");
    }

    printf("\nSubtraction of 1st and 2d matrix : \n");    
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= colomn; j++)
        {
            add[i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
        
    }
   
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= colomn; j++)
        {
            printf("\t%d", add[i][j]);
        }
     printf("\n");
    }
return 0;
}