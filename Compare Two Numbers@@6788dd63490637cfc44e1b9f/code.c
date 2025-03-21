#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    if(num1 > num2) {
        printf("First\n",num1,num2);
    } else if (num1 < num2) {
        printf("Second\n",num1,num2);
    } else {
        printf("Equal",num1,num2);
    }
    return 0;
}