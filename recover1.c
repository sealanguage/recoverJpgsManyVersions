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
    int filename[];
    int buffer[];

    // fread(data, size, number, inptr);
    fread(buffer, 512, 1, raw_file);
        // create an array named buffer

        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0);
            {
                // close jpg old file
                // open new jpg file
                // name it incremental file name


            }
        else {
            // read data to the open jpg file
        }

        if (){
            // if a jpg is already open
        // and the buffer [0] to [3] is not the true for beginning of a jpg

        // write the buffer data to the open jpg file
        }


        else {
            // if jpg isn't open and I don't have a file open
            // close the ope file and open a new one
            // increment te file name 00x.jpg
            // write the buffer data to the new file
            // open the next 512 vytes ti the buffer
        }




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

}



// int sprintf(string ptr, string format);


    // close infile
    fclose(*infile);

    // close outfile
    fclose(*file);

    // success
    return 0;
}