/*
NAME:Catherine Wamaitha Macharia 
REG NO: CT100/G/26195/25
DESCRIPTION:3dimension Arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int chain[3][5][10];
    srand(time(NULL));  

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; 
            }
        }
    }

    
    printf("\nOccupancy summary for multiple branches:\n");
    for (int branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);
        for (int floor = 0; floor < 5; floor++) {
            int occupiedCount = 0, vacantCount = 0;
            for (int room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    occupiedCount++;
                else
                    vacantCount++;
            }
            printf("  Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupiedCount, vacantCount);
        }
    }

    return 0;
}