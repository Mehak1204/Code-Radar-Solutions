#include <stdio.h>

int main() {
    char str1[100], str2[100];  // Declare character arrays (strings)

    // Taking input
    printf("You entered: ");
    scanf("%s", str1);  // Read first word (no spaces)

    printf("You entered: ");
    scanf("%s", str2);  // Read second word (no spaces)

    // Printing the input strings
    printf("First String: %s\n", str1);
    printf("Second String: %s\n", str2);

    return 0;
}