#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // Check if num is not greater than zero using ! operator
    if (! (num > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}