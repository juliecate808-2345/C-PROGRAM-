/*
Name:Catherine Macharia 
Reg:CT100/G/26195/25
Description:To prompt the user to enter student's eligibility for final exams 
*/

#include <stdio.h>
int main()
{
int attendance;
int average_marks;

printf("Enter the attendance in percent :");
scanf("%d",&attendance);

printf("Enter the average marks:");
scanf("%d",&average_marks);

 if(attendance>=75&& average_marks>=40){
printf("Eligible for final exams");
 }else{
printf("Not eligible for final exams ");
 }
 return 0;
 }
 
 
 
 