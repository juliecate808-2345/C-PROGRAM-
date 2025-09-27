//C program 
/*
Name:Catherine Wamaitha
Reg:CT100/G/26195/25
description :To prompt the student to compute for volume and surface area of a cylinder 
*/

#include<stdio.h>
#define PI 3.142

int main(){
//variable declaration 
float radius,height;

//prompt the user to enter radius
printf("Enter the radius\n");
scanf ("%f",&radius);

//prompt the user to enter height 
printf("Enter the height\n");
scanf("%f",&height);

//Calculate the volume and surface area of the cylinder 
//Surface area is pi*radius*radius*height;
//Volume is 2pi*radius*radius+2pi*radius*height;

//display the results 
printf("volume of the cylinder,%.2fm³,volume\n");
printf("Surface area of cylinder,%.2fm²,Surface area\n");
}






