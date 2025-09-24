#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    
    // Read the three numbers from the user
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use if-else if-else to find the greatest number
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the greatest number.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the greatest number.\n", num2);
    } else {
        printf("%d is the greatest number.\n", num3);
    }

    return 0;
}