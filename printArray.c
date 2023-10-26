
/*----------------------DESCRIPTION-----------------------*/
/*This is the 'printArray.c' file of the whole program.   */
/*This file prints out a 2D char array by running it thru */
/*a loop with its size parameter.                         */
/*--------------------------------------------------------*/


//header files
#include "defs.h"


//Prints out the poem without unnecessary lines
//Parameters: 	2D char array and integer
//Returns: 	Nothing
void printArray(char text[MAX_LINE][MAX_LINE_LEN], int size){
  for(int i = 0; i < size; i++){
    printf("%s", text[i]);
  }
}



