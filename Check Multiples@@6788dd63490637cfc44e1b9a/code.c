#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0) {
        printf("Yes\n", num1, num2);
    } else {
        printf("No\n", num1, num2);
    }
    
    return 0;
}