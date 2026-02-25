
/*
Name:Ashkan Ramjerdi
Student ID:xcqc0000
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char Strings[100] = ""; 
    if (argc <=11) {
        for( int k=1; k<argc; ++k ){
            
            if (strlen(argv[k])<=4 && strlen(argv[k])>=1 || (strchr(argv[k], '+') != NULL ) ){
                strcat(Strings, argv[k]);
                if (k<argc-1) {
                    strcat(Strings, "-");
                }
            }  
            
        }

    }


    // process the command-line data using appropriate string functions

    printf("%s\n",Strings); // use only this single print statement in your submitted code

    return 0;
}