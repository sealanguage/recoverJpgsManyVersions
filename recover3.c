#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "buffer.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: input the name of a forensic image.\n");
        return 1;
    }
     // remember filenames
    char *infile = argv[1];
    // open input file and read data
    FILE *file = fopen(infile, "r");
    if (file == NULL)
    {
        // error message in case file does not open
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }








    // close infile
    fclose(infile);

    // close outfile
    fclose(file);

    // success
    return 0;
}