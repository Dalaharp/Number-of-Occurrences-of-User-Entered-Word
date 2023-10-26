
/*----------------------DESCRIPTION-----------------------*/
/*This is the 'printMenu.c' file of the whole assignment. */
/*This file includes the function that displays to users  */
/*what option they want, and each of these options trigger*/
/*another function's calling except for the 'quit' option.*/
/*--------------------------------------------------------*/

#include "defs.h"

//Prints out a menu for which the user can choose 4 options
//Parameters: none
//Returns: the choice that the user choose
int printMenu(){
  int menuChoice = 0;
  while(menuChoice > 5 || menuChoice < 1){
    printf("\nChoose from the menu:\n");
    printf("\t1. print the poem\n");
    printf("\t2. show number of lines in the poem\n");
    printf("\t3. convert the case\n");
    printf("\t4. search for a word\n");
    printf("\t5. quit\n");
    printf("\n\t - - > ");
    scanf("%d", &menuChoice);
    printf("\n");
  }
  return menuChoice;
}






