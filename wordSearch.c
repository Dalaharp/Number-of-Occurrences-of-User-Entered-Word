
/*----------------------DESCRIPTION-----------------------*/
/*This is the 'wordSearch.c' file of the whole program.   */
/*This file includes the 'searchForWord' function which   */
/*takes in a 2D char array of c-style strings and an int  */
/*as parameters. It searches for a word inside a 2D array */
/*and prints the number of times it appears inside of a   */
/*text file. Thank you for reviewing my code!! :):):):):) */
/*--------------------------------------------------------*/

#include "defs.h"


//Searches for a word inside of a 2D array and prints the number of
//times it appears inside the text file
//Parameters: text - 2D char array of c-style strings
//            numLines - the amount of lines in the text
void searchForWord(char text[MAX_LINE][MAX_LINE_LEN], int numLines){

  char word[MAX_LINE_LEN];
  char lowerWord[MAX_LINE_LEN];
  int numTimes = 0;
  
  printf("\nSearch the file for what word? ");
  scanf(" %s", word);

  for(int i = 0; i < MAX_LINE_LEN; i++){
    lowerWord[i] = tolower(word[i]);
  }
  
  for(int i = 0; i < numLines; i++){
    for(int j = 0; j < MAX_LINE_LEN; j++){
      text[i][j] = tolower(text[i][j]);
    }
  }
  
  for(int i = 0; i < numLines; i++){
    char line[MAX_LINE_LEN];
    strcpy(line, text[i]); // Create a copy of the line to preserve original text
    char *token = strtok(line, " \",.-\n"); // Tokenize each line by space, comma, dot, or hyphen
    while(token != NULL){
      if(strcasecmp(token, lowerWord) == 0){ // Compare token with the word to search (case-insensitive)
        numTimes++;
      }
      token = strtok(NULL, " ,.-\n"); // Move to the next token
    }
  }

  printf("\n\"%s\" appears %d times.", word, numTimes);
}
