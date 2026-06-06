#ifndef DECOMPRESS_H   // Header guard to prevent multiple inclusions
#define DECOMPRESS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
 * Function prototype for decompress() function.
 * This function takes a list of integers as input and 
 * decompresses them into a nucleotide sequence string.
 *
 * Arguments:
 * - int n: The number of nucleotide characters to decompress.
 * - char * argv: An array of strings (command line arguments) containing the integers.
 */
void expandSequence(int num, char * args[]);


