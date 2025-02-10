#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];
    
    // Taking user input
    printf("Enter your name: ");
    scanf("%49s", name); // Read string without spaces
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your favorite hobby: ");
    scanf("%49s", hobby); // Read string without spaces
    
    // Displaying user input
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favorite Hobby: %s\n", hobby);
    
    return 0;
}
