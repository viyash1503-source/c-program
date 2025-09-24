#include <stdio.h>

int main() {
    int number;
    int last_digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    
    last_digit = number % 10;
    if (last_digit < 0) {
        last_digit = -last_digit; 
    }

    
    if (last_digit % 3 == 0) {
        printf("The last digit (%d) of %d is divisible by 3.\n", last_digit, number);
    } else {
        printf("The last digit (%d) of %d is NOT divisible by 3.\n", last_digit, number);
    }

    return 0;
}
