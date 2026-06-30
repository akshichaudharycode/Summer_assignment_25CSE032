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
    float total = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        total += s[i].marks;
    }

    average = total / n;

    printf("\n----- Student Report -----\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nRoll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
    }

    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}