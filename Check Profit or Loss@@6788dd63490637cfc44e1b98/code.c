#include <stdio.h>
int main() {
    float costPrice, sellingPrice, profitLoss;
    scanf("%f", &costPrice);
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        profitLoss = sellingPrice - costPrice;
        printf("Profit\n", profitLoss);
    } else if (sellingPrice < costPrice) {
        profitLoss = costPrice - sellingPrice;
        printf("Loss\n", profitLoss);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}