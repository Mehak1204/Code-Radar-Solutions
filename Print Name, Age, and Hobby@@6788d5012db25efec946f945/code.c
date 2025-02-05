#include<stdio.h>
int main()
{
    char name[50];
    int age;
    char hobby[50];
    printf("Enter your name: ");
    fgets(name, size of(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();
    fgets(hobby, sizeof(hobby), stdin);
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);
    return 0;
}