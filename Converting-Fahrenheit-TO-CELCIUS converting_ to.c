/*
Name:Catherine Wamaitha Macharia
Reg:CT100/G/26195/25
Description:Converting-Fahrenheit-TO-CELCIUS
*/

#include <stdio.h>
int main()
{
float temperature, celcius;
printf("Enter your temperature in Fahrenheit:");
scanf("%f",&temperature);

celcius = (temperature -32) * 5 / 9;
printf("Your Celcius temperature is %.2f\n",celcius);
return 0;
}