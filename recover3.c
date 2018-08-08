#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "buffer.h"

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

    // read 512 bytes
    //      look for jpg header case
    //          if yes, count
    //              print count

    int imgcount = 0;


    fread(buffer, 512, 1, file);
    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
    {
        // for (int i = 0; i < *buffer; i++)
        // {
            // fwrite(buffer, sizeof(infile), 1, )
            // sprintf(imagelist.csv, %03i.jpg,)
            // fprintf(file, "%03i.jpg", &buffer[i].filename);
        // }


        count++;
        printf("count %i.jpg/", count);
    }








    // close infile
    fclose(infile);

    // close outfile
    fclose(file);

    // success
    return 0;
}