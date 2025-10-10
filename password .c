/*
Name:Catherine Wamaitha Macharia
Reg:CT100/G/26195/25
Description:Enter password 
*/

#include<stdio.h>
#include<string.h>

int main()
{
char password [20];

do{
printf("Enter password:");
scanf("%19s",password);
}
while(strcmp (password,"1234")!=0);

printf("Access granted\n");
return 0;
}