
/*----------------------DESCRIPTION-----------------------*/
/*This is the main part of the greater PA3 assignment. The*/
/*'PA2.c' file uses the 'defs.h' header file for function */
/*prototypes and calls uses .c files to compile properly. */
/*An additional function 'searchForWord' and .c file are  */
/*added in this project that searches for a word inside of*/
/*a text file. Thank you for reviewing my code! :):):):)  */
/*--------------------------------------------------------*/

//header files
#include "defs.h"

//function prototypes
int countRows(char[MAX_LINE][MAX_LINE_LEN]);

//main
int main(void){

  //while loop that allows program to run again until the user chooses to quit
  int userChoice = 0;
  while(userChoice != 5){
    userChoice = printMenu();
  
    //Declaration of arrays poem and oppositeCase,
    //as two 2D arrays are required for this assignment
    char poem[MAX_LINE][MAX_LINE_LEN];

    //variables used throughout the program
    int counter = MAX_LINE;
    char placeholder[] = "placeholder\n";

    //opens the file "input.txt" instead of using redirection
    FILE *inFile = fopen("input.txt", "r");
  
    //fills the array with placeholders 
    for(int i = 0; i < MAX_LINE; i++){
      strcpy(poem[i], placeholder);
    }

    //Loop that adds text from the txt file
    //The loop also copies data from the original to the oppositeCase array
    for(int i = 0; i < MAX_LINE; i++){
      fgets(poem[i], MAX_LINE_LEN, inFile);
    }

    //By calling the 'countRows' function, the program counts the number
    //of lines in the provided text file
    counter = countRows(poem);

    //If the user chooses the option '2', the number of lines are displayed
    if(userChoice == 2){
      printf("\nThe poem has %d", counter);
      printf(" lines.\n");
    }

    //if the user chooses option '1', the function 'printArray' is called
    //which prints out the poem unaltered
    if(userChoice == 1){
      printArray(poem, counter);
    }
    

    //if the user chooses option '3', the function 'convertCase' is called
    //which prints out the poem with opposite casing
    if(userChoice == 3){
      convertCase(poem);
    }

    //Add description here
    if(userChoice == 4){
      searchForWord(poem, counter);
    }
  }
  
  return 0;
}

//Returns the number of lines in the text
//Parameters: 	2D char array 
//Returns: 	The number of lines in the text
int countRows(char text[MAX_LINE][MAX_LINE_LEN]){
  int counter = MAX_LINE;
  char placeholder[] = "placeholder\n";
  for(int i = 0; i < MAX_LINE; i++){
    if(!strcmp(text[i], placeholder)){
      counter--;
    }
  }
  return counter;
}



