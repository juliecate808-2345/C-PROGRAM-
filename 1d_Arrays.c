/*
NAME:Catherine Wamaitha Macharia 
REG NO: CT100/G/26195/25
DESCRIPTION:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    float revenue[7];
    float totalRevenue = 0.0f, averageRevenue;

    printf("Enter revenue for each day of the week:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0f;

    printf("\nTotal Revenue for the week: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n", averageRevenue);

    return 0;
}