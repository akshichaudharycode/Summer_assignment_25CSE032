#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Sum = %.2f", a + b);
            break;

        case 2:
            printf("Difference = %.2f", a - b);
            break;

        case 3:
            printf("Product = %.2f", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Quotient = %.2f", a / b);
            else
                printf("Division by zero is not possible.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}