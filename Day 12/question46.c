#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, temp = num;
    int count = 0, sum = 0, digit;

    while(temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    while(temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is Not an Armstrong Number\n", num);

    return 0;
}