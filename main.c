#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int CreateNewLine();

int main (int argc, char *argv[])
{
    // No args passed
    if (argc == 1)
    {
        printf("\x1b[H\x1b[2J\x1b[3J"); // move cursor to home, clear lines, clear saved lines
        printf("\x1b[2 q"); // Make cursor steady block
        fflush(stdout); // Flush to immediately output
        
        char *line = malloc(MAX_LINE_LENGTH * sizeof(char)); // Declare new line with malloc
        
        // Check if allocation succeeded
        if (line == NULL)
        {
            fprintf(stderr, "Memory allocation failed!\n");
            return 1;
        }

        // Main processing loop
        fgets(line, (int)(MAX_LINE_LENGTH), stdin);
        printf("line: %s", line);
        fflush(stdout);

        // Open a new file
//        FILE* fptr; // Stores the value returned by fopen
//        fptr = fopen("temp", "w");
//
//        if (fptr == NULL) // Check fopen succeeded
//        {
//            fprintf(stderr, "File creaton failed!\n");
//        }
             
        free(line);
        line = NULL;
    }
    else if (argc == 2) // Two args passed
    {

    }
    else
    {

    }
    return 0;
}
