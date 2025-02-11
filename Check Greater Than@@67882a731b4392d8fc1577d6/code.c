#include <stdio.h>

int main() {
    int num1, num2;
    
    // Taking user input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Checking if the first number is greater than the second
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else {
        printf("%d is not greater than %d\n", num1, num2);
    }
    
    return 0;
}
