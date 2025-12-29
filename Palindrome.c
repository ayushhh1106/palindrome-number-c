#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number
    original = num;

    // Reverse the number
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    // Check palindrome
    if (original == reversed) {
        printf("Palindrome Number\n");
    } else {
        printf("Not a Palindrome Number\n");
    }

    return 0;
}

/*
Example:
Input: 121
Output: Palindrome Number
*/
