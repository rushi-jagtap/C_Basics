#include<stdio.h>
int main()
{
    int num, rem=0, result=0 ;
    printf("\n Enetr the number : ");
    scanf("%d", &num );

    for (int i = num ; i > 0; i=i/10)
    {
        rem=i % 10;
        result = result * 10 + rem;
        printf(" \n %d at %d ", result, i);
    }
    printf(" \n Revrse no is : %d ", result);

    if (result==num)
    {
        printf(" \n Palindrom No");
    }
    else
    {
        printf(" \n Not palindrome ");
    }
    return 0;
}