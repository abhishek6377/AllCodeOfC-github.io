#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
int number, guess,attempts=1;
srand(time(0));
number=rand()%100+1;
clrscr();
printf("Enter the number between (1 to 100)=%d\n",number);
do{
printf("Guess the number between 1to 100\n");
scanf("%d",&guess);
if(guess>number){
printf("Lower number please\n");
}
else if(guess<number)
{
printf("Higher number please\n");
}
else{
printf("You guessed it in %d attempt\n",attempts);

}
attempts++;
}while(guess!=number);
getch();
}






