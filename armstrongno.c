#include<stdio.h>
int main()
{
    int i, num, sum=0, rem=0;
    printf("\n Enter a no : ");
    scanf("%d",&num);
  
        for ( i = num; i != 0; i=i/10)
    {
        rem=i%10;
        sum=sum+rem*rem*rem;   
    }

    if (num==sum)
    {
        printf("\n Armstrong no : %d", sum);
    }
    else
    {
        printf("\n Not armstrong no : %d", sum);
    }
        return 0;    
}