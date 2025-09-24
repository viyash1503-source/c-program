#include <stdio.h>

int main() {
    int num1, num2, sum; 

    
    printf("Enter the first number: ");
    scanf("%d", &num1); 

    
    printf("Enter the second number: ");
    scanf("%d", &num2); 

    
    sum = num1 + num2;

    
    if (sum % 2 == 0) {
        
        printf("The sum %d is an even number.\n", sum);
    } else {
        
        printf("The sum %d is an odd number.\n", sum);
    }

    return 0; 
}
