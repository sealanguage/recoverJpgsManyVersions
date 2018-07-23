// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

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
    // open input file
    FILE *file = fopen(infile, "r");
    if (file == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }
    //how do I know I opened the memroy card file?
    // fread(data, size, number, inptr);
    fread(data, 512, number, &file);

    // sprintf into a buffer struct    sprintf stores in ptr a string formatted along the lines of format.

    // create a struct to put 512 bytes of data into that will be searched for 0xff 0xd8 0xff beginning of jpg

}



// int sprintf(string ptr, string format);