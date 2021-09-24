#include<stdio.h>
#include<stdlib.h>
//Calculating area of triangle using function :
int base, hight;
float area=0;

void areaoftriangle()
{
    printf("\n Enter the value of base and hight");
    scanf("%d %d", &base, &hight);
    area=0.5 * base * hight;

    printf("\n Area of triangle %.2f", area);
}
int main()
{
    areaoftriangle();
    printf("\n Values of base : %d and hight : %d", base, hight);
    return 0;
}