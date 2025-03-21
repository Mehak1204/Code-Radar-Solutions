#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num >= 1 && num <= 100) {
        printf("In Range\n", num);
    } else {
        printf("Out of Range\n", num);
    }
    return 0;
}