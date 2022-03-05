#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int snakeWaterGun(char you,char comp){
if(you==comp){
return 0;
}
if(you=='s'&& comp=='w'){
return 1;
}
else if(you=='w'&& comp=='s'){
return -1;
}
if(you=='s'&& comp=='g'){
return 1;
}
else if(you=='g'&& comp=='s'){
return -1;
}
if(you=='g'&& comp=='w'){
return 1;
}
else if(you=='w'&& comp=='g'){
return -1;
}

}
void main()
{
clrscr();
char you,comp;
srand(time(0));
 int number=rand()%100+1;
if(number<33){
 comp='s';
}
else if(number>33&& number<66){
 comp='w';
}
else{
comp='g';
}

printf("Enter 's' for snake,'w' for water and 'g' foe gun\n");
scanf("%c",&you);
int result=snakeWaterGun(you,comp);
printf("You choose %c and computer choose %c.",you,comp);
if(result==0){
printf("Game draw!\n");
}
else if(result==1){
printf("You win!\n");
}
else{
printf("You lose!\n");
}
getch();
}