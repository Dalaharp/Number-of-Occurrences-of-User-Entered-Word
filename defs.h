
/*----------------------DESCRIPTION-----------------------*/
/*This is the 'defs.h' header file of the complete assign-*/
/*-ment. This includes all header files, define statements*/
/*and function prototypes. All .c files include this file */
/*for them to compile properly.                           */
/*--------------------------------------------------------*/

#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_LINE 200
#define MAX_LINE_LEN 100

int printMenu();
void convertCase(char text[MAX_LINE][MAX_LINE_LEN]);
void printArray(char text[MAX_LINE][MAX_LINE_LEN], int);
void searchForWord(char text[MAX_LINE][MAX_LINE_LEN], int);

#endif
