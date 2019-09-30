#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE* inventory= fopen("inventory.txt", "a");
    char cat[20];
    char userInput = 'z';
    int itemNum;
    float cost= 11.11;
    char date[20];
    char city[20];
    char str[999];

do
{

  printf("\n(A)dd Files, (V)iew Files, (Q)uit:");
  scanf(" %c", &userInput);

  if (userInput == 'A')
  {
      printf("\nAdding File!");
      printf("\n Item Number:");
      scanf("%d", &itemNum);
      printf("\nCategory:");
      scanf("%s",cat);
      printf("\nCost:");
      scanf("%f",&cost);
      printf("\nCity:");
      scanf("%s",city);
      printf("\nDate:");
      scanf(" %s",date);
      inventory= fopen("inventory.txt","a");
      fprintf(inventory,"\n%d %s %2.2f %s %s",itemNum,cat,cost,city,date);
      fclose(inventory);
  }
  if (userInput == 'V')
  {
      printf("\nViewing files!\n");
      inventory=fopen("inventory.txt","r");
      while(fscanf(inventory,"%s", str) !=EOF){
        printf("%s ",str);
      }
  }

} while (userInput != 'Q');

printf("Terminating Program...");

  return 0;
}