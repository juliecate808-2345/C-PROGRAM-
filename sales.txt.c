/*
NAME:Catherine Wamaitha Macharia 
REG:CT100/G/26195/25
DESCRIPTION:SALES.TXT
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening sales.txt\n");
        return 1;
    }

    double amount, total_sales = 0.0;

    
    while (fscanf(file, "%lf", &amount) == 1) {
        total_sales += amount;
    }

    
    fclose(file);

    printf("Total sales for the day: %.2f\n", total_sales);

    return 0;
}