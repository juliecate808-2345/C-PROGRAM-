/*
Name:Catherine Wamaitha Macharia
Reg:CT100/G/26195/25
Description:Calculate-FARE
*/

#include <stdio.h>
int main()
{
float DISTANCE ,FARE;
printf("Enter your DISTANCE in KILOMETER:"); 
scanf("%f",&DISTANCE);

FARE=DISTANCE * 50;
printf("Your FARE is %.2f\n",FARE);
return 0;
}