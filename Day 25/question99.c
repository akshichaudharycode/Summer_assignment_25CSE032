#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    char name[100][50], temp[50];

    printf("Enter names:\n");

    for(int i = 0; i < n; i++)
        gets(name[i]);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Names in Alphabetical Order:\n");

    for(int i = 0; i < n; i++)
        printf("%s\n", name[i]);

    return 0;
}