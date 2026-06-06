#ifndef COMPRESS_H   // Header guard to prevent multiple inclusions
#define COMPRESS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
 * Function prototype for encodeDNA() function.
 * This function takes a sequence of nucleotides and compresses it 
 * into a binary representation using bitwise operations.
 *
 * Arguments:
 * - char * sequence: A pointer to the nucleotide sequence string.
 */
void encodeDNA(char * sequence);

