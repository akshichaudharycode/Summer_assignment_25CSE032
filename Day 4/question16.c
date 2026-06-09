#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers: ");

    for(int num = start; num <= end; num++) {
        int original = num;
        int temp = num;
        int count = 0;
        int sum = 0;

        while(temp != 0) {
            count++;
            temp /= 10;
        }

        temp = num;
        while(temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == original)
            printf("%d ", original);
    }

    return 0;
}