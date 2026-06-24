#include <stdio.h>

int main()
{
    char str[100];
    int maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum Occurring Character = %c", maxChar);

    return 0;
}