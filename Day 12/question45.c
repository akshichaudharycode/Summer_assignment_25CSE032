#include <stdio.h>

int isPalindrome(int num) {
    int original = num, reverse = 0, digit;

    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return (original == reverse);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("%d is a Palindrome Number\n", num);
    else
        printf("%d is Not a Palindrome Number\n", num);

    return 0;
}