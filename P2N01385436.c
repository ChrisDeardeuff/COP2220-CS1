#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){
//Integers
	int num;
	int tryOne;
	int tryTwo;
	int tryThree;
	int tryFour;
	int tryFive;
//RNG
srand(time(NULL));

num = rand();
num = num % 32;
//Begining of Game

printf("\n\nWelcome, guess a number from 0 to 32!\n\n");

//Try One
printf("Please Enter number:\n");
scanf("%d",&tryOne);

if(tryOne>num){

printf("Sorry, the number is smaller than your guess. You have four tries left\n");
}
if(tryOne<num){

printf("The number is larger than your guess. You have four tries left\n");
}
if(tryOne==num){

	printf("Congrats, you guessed the number! it was %d. You had four tries left\n", num);
	return 0;
}
//Try Two
printf("Please Enter number:\n");
scanf("%d",&tryTwo);

if(tryTwo>num){

printf("Sorry, the number is smaller than your guess. You have three tries left\n");
}
if(tryTwo<num){

printf("The number is larger than your guess. You have three tries left\n");
}
if(tryTwo==num){

	printf("Congrats, you guessed the number! it was %d. You had three tries left\n", num);
	return 0;
}
//Try Three
printf("Please Enter number:\n");
scanf("%d",&tryThree);

if(tryThree>num){

printf("Sorry, the number is smaller than your guess. You have two tries left\n");
}
if(tryThree<num){

printf("The number is larger than your guess. You have two tries left\n");
}
if(tryThree==num){

	printf("Congrats, you guessed the number! it was %d. You had two tries left\n", num);
	return 0;
}
//Try Four
printf("Please Enter number:\n");
scanf("%d",&tryFour);

if(tryFour>num){

printf("Sorry, the number is smaller than your guess. You have one try left\n");
}
if(tryFour<num){

printf("The number is larger than your guess. You have one try left\n");
}
if(tryFour==num){

	printf("Congrats, you guessed the number! it was %d. You had one try left\n", num);
	return 0;
}
//Try Five
printf("Please Enter number:\n");
scanf("%d",&tryFive);

if(tryFive>num){

printf("Sorry, the number is smaller than your guess. You have no tries left.. the number was %d \n",num);
}
if(tryFive<num){

printf("The number is larger than your guess. You have no tries left.. the number was %d \n",num);
}
if(tryFive==num){

	printf("Congrats, you guessed the number! it was %d. You had no tries left..\n", num);
}
return 0;
}
