#include<stdio.h>
int main()
{
    int s1, s2, s3;
    printf("\n Enter the sides of triangle s1, s2, s3");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 == s2 && s2 == s3 && s1 == s3)
    {
        //all sides are equal length
        printf("\n Triangle is Equilateral");
    }

    else if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        //any to sides are equal length
        printf("\n Triangle is Isosceles");
    }

    else
    {
        //all sides are different lengths
        printf("\n Triangle is scalene");
    }
    return 0;
}