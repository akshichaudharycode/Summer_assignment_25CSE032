#include <stdio.h>

int main() {
    int num, original, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        digit = num % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if(sum == original)
        printf("%d is a Strong Number\n", original);
    else
        printf("%d is Not a Strong Number\n", original);

    return 0;
}