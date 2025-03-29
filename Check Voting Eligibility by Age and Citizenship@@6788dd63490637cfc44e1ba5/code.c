#include <stdio.h>
int main() {
    int age,citizen;
    scanf("%d", &age);
    scanf("%d",&citizen);
    if (age >= 18 && citizen==1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }
    return 0;
}