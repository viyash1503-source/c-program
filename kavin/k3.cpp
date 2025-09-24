#include<stdio.h>#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Compare the two numbers
    if (num1 > num2) {
        printf("%d is the greatest number.\n", num1);
    } else if (num2 > num1) {
        printf("%d is the greatest number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
	
