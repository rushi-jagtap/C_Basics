#include<stdlib.h>
#include<stdio.h>
int main()
{
    int array[100], i=1, no;
    printf("\n Enter the size of array");    
    scanf("%d", &no);

    printf("\n Enter the elements of array");
    for ( i = 1; i <= no ; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("\n Array of even number");    
    for ( i = 1; i <= no ; i++)
    {
        if (array[i]%2==0)
        {
            printf("\t%d", array[i]);
        }
    }
    return 0;
}