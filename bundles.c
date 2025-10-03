/*
Name:Catherine Macharia
Reg:CT100/G/26195/25
Description:
*/
#include<stdio.h>

//main function
int main(){
int choice;

//display bundle menu
printf("select your bundle\n");
printf("1.100MB @ 50KES\n");
printf("2.500MB @ 200KES\n");
printf("3.1GB @ 350KES\n");
printf("4.2GB @ 600KES\n");

//prompt the user to enter their choice (1-4)
printf("Enter your choice(1-4)=");
scanf("%d",&choice);

//use of switch to display the bundles selected and it's cost
if(choice==1){
printf("You have selected 100MB for 50KES");
}
else if(choice==2){
printf("You have selected 500MB for 200KES");
}
else if(choice==3){
printf("You have selected 1GB for 350KES");
}
else if( choice==4){
printf("You have selected 2GB for 600KES");
}
else{
printf("invalid choice");
}

return 0;
}