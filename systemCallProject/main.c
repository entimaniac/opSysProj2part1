#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, const char * argv [] ){
    char * testString = "This string yo";

    FILE * thisFile;
    thisFile = fopen( "pooptest.txt", "w" );
    if ( thisFile != NULL ){
        fputs( testString, thisFile );
        fclose ( thisFile );
    }

    struct stat checkInputStruct;
    if (stat("pooptest.txt", &checkInputStruct) == 0)
        if (stat("pooptest.txt", &checkInputStruct) == 0)
            ;

    return 0;
}