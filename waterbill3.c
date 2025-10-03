/*
Name:Catherine Macharia
Reg:CT100/G/26195/25
Description:Prompt the user to calculate the water bill
*/
#include <stdio.h>// scanf(),printf()

//main function 
int main () {
int units;
float total_bill;

//prompt the user to enter the number of units
printf("Enter units \n");
scanf("%d",&units);

//calculating the bill using if-else
if(units >= 0 && units<= 30){
total_bill = units*20;
}
else if(units >= 31 && units <= 60){
total_bill = units*25;
}
else if(units >= 60){
total_bill = units*30;
}
//display total waterbill to decimal places 
printf("water bill=KES%.2f \n,total_bill");

return 0;
}
