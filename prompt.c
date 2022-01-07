#include <stdio.h>

// Declare buffer for user input of size 2048
static char input[2048];

int main(int argc, char **argv)
{
    // Print version and Exit information
    puts("Lispy version 0.0.0.0.1");
    puts("Press Ctrl+C to Exit\n");

    // Infinite Loop

    while (1)
    {
        //Output to prompt
        fputs("lispy>", stdout);

        //Get user input
        fgets(input, 2048, stdin);

        //print back to the console
        printf("No, you're a %s", input);
    }

    return 0;
}