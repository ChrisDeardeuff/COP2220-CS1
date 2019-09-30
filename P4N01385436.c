#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//only generate between 1 and 9 for two ship and 1 and 8 for the three ship

//Max size ranges for RNG
#define MAX1 9
#define MAX2 8
#define MAX_SHOTS 10
#define MAX3 1


//RNG ....
int randomNumber (int size){
       // random integer is generated in the range 1 to size and returned
        srand(time(NULL));
        return((rand() % size)+1);
}
int randomNumberHV (int size){
       // random integer is generated in the range 0 to size and returned
        srand(time(NULL));
        return(rand() % size);
}

int main(void){

int shots = 0;
char start;
int userInputX;
int userInputY;

int shipOneXX;
int shipOneYY;

int shipTwoXX;
int shipTwoXXX;
int shipTwoYY;
int shipTwoYYY;

//assigns random number to ships
int shipOneX=randomNumber(MAX1);
int shipOneY=randomNumber(MAX1);
int shipTwoX=randomNumber(MAX2);
int shipTwoY=randomNumber(MAX2);
int hV1=randomNumberHV(MAX3);
int hV2=randomNumberHV(MAX3);


//Horizontal or Verticle 

if(hV1 == 1){

  int shipOneXX = shipOneX++;

}else{

  int shipOneYY = shipOneY++;

}


if (hV2 == 0)
{
  int shipTwoYY = shipTwoY++;
  int shipTwoYYY = shipTwoYY++;
}else{
  int shipTwoXX = shipTwoX++;
  int shipTwoXXX = shipTwoXX++;
}

// start of game
printf("\nWould you like to start the game? (Y)es or (N)o:");
scanf("%c",start);


if(start=='Y'){

  do{
    /*printf("this is a test ");*/
   
    shots++;

    printf("\nYou have %d shots left!", shots);
    printf("\nPlease insert x and y coords (1,1)--(10,10):");
    printf("\nX:");
    scanf("%d",userInputX);
    printf("\nY:");
    scanf("%d",userInputY);

 //ship one space 1
    if (userInputX == shipOneX)
    {
        if (userInputY == shipOneY)
        {
          printf("You hit my battleship!");
        }
        
        if (userInputY == shipOneYY)
        {
          printf("You hit my battleship!");
        }
    }
    else if (userInputX == shipOneXX)
    {
      if (userInputY == shipOneY)
      {
          printf("You hit my battleship!");
        }
          if (userInputY == shipOneYY)
          {
            printf("You hit my battleship!");
          }
    }
    else if (userInputX == shipTwoX)
    {
      if (userInputY == shipTwoY)
      {
        printf("You hit my battleship!");
      }
    }
    else if (userInputX == shipTwoXX)
    {
      if (userInputY == shipTwoYY)
      {
        printf("You hit my battleship!");
      }
    }
    else if (userInputX == shipTwoXXX)
    {
      if (userInputY == shipTwoYYY)
      {
        printf("You hit my battleship!");
      }
    }
    else
    {
      printf("you missed!");
    }
  }while(shots <= MAX_SHOTS);


}else if(start=='N'){

  printf("Quitting Program");
}


return 0;
}