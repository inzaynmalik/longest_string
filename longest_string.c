#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{ 
    if (argc == 1)
        puts ("");
    
    if (argc == 2)
    {
        printf("\nArgument Passed: %s" , argv[1]);
    }

    if (argc >2)
    {
        printf("\nFirst Argument of Longest String: %s", argv[1]);
        for (int i=1; i <argc; i++)
        {
            if (strlen(argv[1]) < strlen(argv[i]))
            {
                argv[1] = argv [i];
            }
        }
        printf("\nLargest Argument: %s", argv[1]);
    }
    return EXIT_SUCCESS;
}