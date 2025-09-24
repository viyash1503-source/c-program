#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num1, num2, difference;

    
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    
    difference = abs(num1 - num2);

    
    if (difference % 2 == 0) {
        printf("The absolute difference between %d and %d is %d, which is an EVEN number.\n", num1, num2, difference);
    } else {
        printf("The absolute difference between %d and %d is %d, which is an ODD number.\n", num1, num2, difference);
    }

    return 0;
}