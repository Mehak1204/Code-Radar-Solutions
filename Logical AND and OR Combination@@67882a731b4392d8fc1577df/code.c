#include <stdio.h>

int main() {
    int a, b;
    
    // Taking two space-separated integers as input
    scanf("%d %d", &a, &b);
    
    // Checking if the numbers are equal
    if ((a > 0 && b < 0 ) || (a == 0 && b == 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}