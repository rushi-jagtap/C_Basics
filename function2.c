#include<stdlib.h>
#include<stdlib.h>
void areaofcircle(int radius)
{
    float pi=3.14, area=0.0;
    area = pi * radius * radius;

    printf("\n Area of circle : %.2f",area);
}

int main()
{
    int r;
    printf("\n Enter radius ");
    scanf("%d", &r);

    areaofcircle(r);
    return 0;
}