/*
Name:Catherine Wamaitha Macharia
Reg:CT100/G/26195/25
Description:C program that inplement a guessing gams
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

int secretnumber;
int guess;
int attempts=0;

srand(time(NULL));
secretnumber=rand() % 20 + 1;

printf("I selected a number between 1 and 20.Try to guess it");
do {
printf("Enter your guess:");
scanf("%d",&guess);
attempts++;


if(guess > secretnumber) {
printf("Too High!\n");
}

else if (guess < secretnumber) {
printf("Too Low!\n");
}

else{
printf("Congratulations !\n");
printf("You guessed the number in %d attempts.\n",attempts);
}

}while(guess != secretnumber);
return 0 ;
}
