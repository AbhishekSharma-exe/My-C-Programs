#include <stdio.h>
#include<string.h>
int main()
{   
    int x;
    char alpha;                                              
    printf("Enter an Alphabet( In lowercase or uppercase ):\n");
    scanf("%c", &alpha);
    x=(int)alpha;
    if (x<97)
    {
        x=x+32;
        alpha=(char)x;
    }
    
    switch (alpha)
    {
    case 'a':
        printf("It is a vowel", alpha);
        break;
    case 'e':
        printf("It is a vowel", alpha);
        break;
    case 'i':
        printf("It is a vowel", alpha);
        break;
    case 'o':
        printf("It is a vowel", alpha);
        break;
    case 'u':
        printf("It is a vowel", alpha);
        break;
    default:
        printf("%c is a consonant", alpha);
        break;
    }
    return 0;
}