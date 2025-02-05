#include<stdio.h>
int main()
{
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%1f %1f", &a, &b);
    product = a*b;
    printf("Product = %.21f", product);
    return 0;
    
}