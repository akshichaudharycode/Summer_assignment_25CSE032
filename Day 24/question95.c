#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[100];
    int maxLen = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);

    for(int i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            int len = i - start;

            if(len > maxLen)
            {
                maxLen = len;

                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest Word = %s", longest);

    return 0;
}