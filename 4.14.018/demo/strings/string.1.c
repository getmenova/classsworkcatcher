#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, string argv[])

{
    if (argc !=2){

        printf("Usage: strings \"phrase\"\n");
    }
    return 0;

    printf("%i\n", argc);
    int length  = strlen(argv[1]);
    printf("%i\t%s\n", length, argv[0]);

}

