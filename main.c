#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

#define BUFFER_SIZE 256  // Define a constant for the buffer size

int main(int argc, char *argv[])
{
    FILE *file;
    char *line = malloc(BUFFER_SIZE); // Allocate memory for the line buffer
    if (line == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    if (argc != 2)
    {
        fprintf(stderr, "Usage: monty file\n");
        free(line);  // Free allocated memory before exiting
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        free(line);  // Free allocated memory before exiting
        exit(EXIT_FAILURE);
    }

    while (fgets(line, BUFFER_SIZE, file) != NULL)
    {
        // Process the line here (e.g., execute_instruction)
    }

    free(line); // Free allocated memory
    fclose(file); // Close the file
    return 0;
}

