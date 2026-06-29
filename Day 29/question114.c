#include <stdio.h>

int main()
{
    int n, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display Array");
    printf("\n2. Find Sum");
    printf("\n3. Find Largest");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array: ");
            for(int i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
        {
            int sum = 0;
            for(int i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);
            break;
        }

        case 3:
        {
            int largest = arr[0];

            for(int i = 1; i < n; i++)
            {
                if(arr[i] > largest)
                    largest = arr[i];
            }

            printf("Largest Element = %d", largest);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}