#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("%d\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d\n", num2, num1);
    } else {
        printf("\n");
    }

    return 0;
}