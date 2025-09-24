#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");

    // Read the three numbers from the user
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the smallest number using if-else if statements
    if (num1 <= num2 && num1 <= num3) {
        printf("The smallest number is: %d\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("The smallest number is: %d\n", num2);
    } else {
        printf("The smallest number is: %d\n", num3);
    }

    return 0;
}