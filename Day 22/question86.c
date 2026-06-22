#include <stdio.h>

int main()
{
    char str[100];
    int count = 1;

    printf("Enter a sentence: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            count++;
    }

    printf("Number of words = %d", count);

    return 0;
}