#include<stdio.h>
int main()
{
    char c;
    printf("\n Enetr character");
    scanf(" %c", &c);
    
    if((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
    { 
        printf("\n Vowel");
    }
    else
    {
        printf("\n Consonant");
    }
    return 0;
}