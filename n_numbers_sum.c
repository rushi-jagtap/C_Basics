#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("\n Enter 5 numbers : ");

    for ( i = 1 ; i <=5 ; i++)
    {
        printf("\n Number - %d : ", i);
        scanf("%d", &n);
        sum+=n;
    }
    printf("\n sum of n numbers : %d", sum);
    return 0;
}