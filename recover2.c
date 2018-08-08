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
    printf("This is the file: %s\n", argv[1]);
    // open input file and read data
    FILE *file = fopen(infile, "r");
    if (file == NULL)
    {
        // error message in case file does not open
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    int count = 0;

    int buffer[512];
    char buffer[MAX_SIZE];
    // strcpy(buffer,"This is the test file");
    // int buffer[sizeof(infile)];
    fread(buffer, sizeof(infile), 1, file);
    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
    {
        for (int i = 0; i < *buffer; i++)
        {
            fwrite(buffer, sizeof(infile), 1, *file)
            sprintf(imagelist.csv, %03i.jpg,)
            // fprintf(file, "%03i.jpg", &buffer[i].filename);
        }
    }

    //how do I know I opened the memroy card file?


    // allocate space for the buffer
    // int data = xxxxxxx;
    // buffer data

    // int filename_counter = 000;


    // int *getArray(int size)
    // {
    //     int *a = malloc(size * sizeof *a);
    //     for (int i = 0; i < size; i++)
    //         a[i] = i * 2;
    //     return a;
    // }




    // // fread(data, size, number, inptr);
    // fread(buffer, 512, 1, file);
    //     // create an array named buffer

    //     if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0);
    //         {
    //             for (int i = 0; i < buffer; i++)
    //             {
    //                 &filename counter++;
    //                 printf("Found jpg number %i.jpg \n", filename_counter);
    //             }
    //             // open new jpg file
    //             // name it incremental file name


    //         }
    //     else (xxxxxx)
    //     {
    //         printf("File did not read properly\n");
    //     }

        // if (){
        //     // if a jpg is already open
        // // and the buffer [0] to [3] is not the true for beginning of a jpg

        // // write the buffer data to the open jpg file
        // }


        // else {
        //     // if jpg isn't open and I don't have a file open
        //     // close the ope file and open a new one
        //     // increment te file name 00x.jpg
        //     // write the buffer data to the new file
        //     // open the next 512 vytes ti the buffer
        // }




    // // sprintf into a buffer struct    sprintf stores in ptr a string formatted along the lines of format.
    // // making a new jpg
    // sprintf(filename, %03i.jpg, 2);
    //     // write code to write file names, starting with 000.jpg and incrementing for each new image
    //     int filecounter = 0;
    //     for (int i = 0; i < xxxxx; i++)
    //         {
    //         fwrite(buffer, 512, 1, "filetowritenewimagefile")

    //         // increment the file names
    //         filecounter++:
    //         }

    // FILE *img = fopen(filename, "w");



    // create a struct to put 512 bytes of data into that will be searched for 0xff 0xd8 0xff beginning of jpg





// int sprintf(string ptr, string format);


    // close infile
    fclose(infile);

    // close outfile
    fclose(file);

    // success
    return 0;
}