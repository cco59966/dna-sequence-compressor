#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Converts a list of integers given as arguments in the main method
 * into decompressed form of a nucleotide sequence.
 */
void expandSequence(int num, char * args[]) {
    char nucleotides[4] = "ATCG";
    int argIndex = 3;
    int value = atoi(args[argIndex]);
    int position = 1;

    // Uses bitwise operator to convert each integer into a nucleotide sequence.
    while (num > 0) {
        int nucleotide = (value >> (4 - position) * 2) & 0x3;
        printf("%c", nucleotides[nucleotide]);
        position++;
        num--;

        // Proceeds to the next integer if there exists more integers provided.
        if ((position > 4) && (num > 0)) {
            position = 1;
            argIndex++;
            value = atoi(args[argIndex]);
        } // if
    } // while
} // expandSequence
