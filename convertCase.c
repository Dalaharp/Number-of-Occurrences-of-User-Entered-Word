
/*----------------------DESCRIPTION-----------------------*/
/*This is the 'convertCase.c' file of the whole program.  */
/*This file includes the function that converts a 2D array*/
/*of characters and inverts the casing of each one.       */
/*--------------------------------------------------------*/

//header files
#include "defs.h"

//Prints out the poem with inverted casing on characters
//Parameters: 	2D char array
//Returns: 	Nothing
void convertCase(char text[MAX_LINE][MAX_LINE_LEN]){
  int counter = MAX_LINE;
  char placeholder[] = "placeholder\n";
  for(int i = 0; i < MAX_LINE; i++){
    if(!strcmp(text[i], placeholder)){
	counter--;
    }
  }
  for(int i = 0; i < counter; i++){
    for(int j = 0; j < MAX_LINE_LEN; j++){
      if(text[i][j] >= 'A' && text[i][j] <= 'Z'){
        text[i][j] = tolower(text[i][j]);
      }
      else{
	text[i][j] = toupper(text[i][j]);
      }
    }
    printf("%s", text[i]);
  }
}

