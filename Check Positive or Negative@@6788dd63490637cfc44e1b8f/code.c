#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a > 0){
        printf("Positive\n", a);
    } else if (a < 0) {
        printf("Negative\n", a);
    } else {
        printf("Zero\n", a);
    }
    return 0;
}