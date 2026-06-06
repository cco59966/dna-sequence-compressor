#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compress.h"
#include "decompress.h"
// this is the main method , where the program is executed.
int main (int argc, char * argv[]) {
    if (strcasecmp(argv[1], "-c") == 0) {
        encodeDNA(argv[2]);
    } else {
        expandSequence(atoi(argv[2]), argv);
    } // if

    printf("\n");
    return 0;
} // main
