#include<stdio.h>
int main()
{
    int n, sum=0;
    do
    {
        printf("\n enter the number");
        scanf("%i", &n);
        sum=sum+n;

    } while (n!=0);
  printf("\n Sum =%d", sum);
return 0;
}