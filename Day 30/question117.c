#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Records\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nRoll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
    }

    return 0;
}