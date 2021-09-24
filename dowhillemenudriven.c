#include<stdio.h>
int main()
{
    int choice, r, side, length, width, base, hight;
    float pi=3.14, area=0.0;
    do
    {
        printf("\n\n --------------MENU------------");
        printf("\n 1. Area Of circle ");
        printf("\n 2. Area Of Square");
        printf("\n 3. Area Of Reactangle");
        printf("\n 4. Area Of Triangle");
        printf("\n -------------------------------");

        printf("\n\n Enter your choice  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n Enter the radus of circle");
            scanf("%d", &r);
            area=pi*r*r;
            printf("\n Area of circle is : %f", area);
            break;

        case 2:
            printf("\n Enter the sides");
            scanf("%d", &side);
            area=side*side;
             printf("\n Area of square is : %f", area);
            break;
        
        case 3:
            printf("\n Enetr length and width");
            scanf("%d %d", &length, &width);
            area=length*width;
             printf("\n Area of reactangle is : %f", area);
            break;

        case 4:
            printf("\n Enter bese and higth");
            scanf("%d %d", &base, &hight);
            area=(base*hight)/2;
             printf("\n Area of triangle is : %f", area);
            break;

        case 5:
            exit(1) ;
        default:
            printf("\n INVALID MENU");
            break;
        }        
    } while (choice!=5);
  return 0;  
}