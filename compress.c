#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Converts a sequence of nucleotides given as an argument in the main method into a
 * compressed form containing integers.
 */
void encodeDNA(char * sequence) {
    // Length of the given sequence string
    int seqLength = strlen(sequence);
    printf("%d ", seqLength);

    // Counts the current evaluating index of the sequence string
    int currentBit = 0;
    int nucleotideCount = 0;

    // Uses bitwise operator to convert each nucleotide character into an integer.
    while (* sequence) {
        if (sequence[0] == 'A') {
                currentBit = (currentBit << 2);
        } else if (sequence[0] == 'T') {
                currentBit = (currentBit << 2) | 1;
        } else if (sequence[0] == 'C') {
                currentBit = (currentBit << 2) | 2;
        } else if (sequence[0] == 'G') {
                currentBit = (currentBit << 2) | 3;
        } // if

        nucleotideCount++;
        sequence++;

        if (nucleotideCount == 4) {
            printf("%d ", currentBit);
            currentBit = 0;
            nucleotideCount = 0;
        } // if
    } // while

    // Pads the bitstring with extra zeros if the sequence does not contain
    // a total of 8 bits. Then converts the bitstring into an integer.
    if (nucleotideCount > 0) {
        currentBit = currentBit << (4 - nucleotideCount) * 2;
        printf("%d", currentBit);
    } // if
} // encodeDNA


