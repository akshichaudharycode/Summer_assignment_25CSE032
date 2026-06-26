#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("C Language Quiz\n\n");

    printf("1. Who developed C Language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n2. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. <!-- -->\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n3. Which function is used to print output?\n");
    printf("1. scanf()\n2. printf()\n3. gets()\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}