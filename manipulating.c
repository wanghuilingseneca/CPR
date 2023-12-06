// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// V1
void manipulating(void) {
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE];// main buffer for first string input
    char string2[BUFFER_SIZE];
    do {
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);//captures first string input
        string1[strlen(string1) - 1] = '\0';//modify for newline character
        if ((strcmp(string1, "q") != 0)) {
            printf("Type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);//captures first string input
            string2[strlen(string2) - 1] = '\0';//modify for newline character
            strcat(string1, string2);//main action: concatenate string 2 and string 1
            printf("Concatenated string is \'%s\'\n", string1);//the output conactenated string
        }
    } while (strcmp(string1, "q") != 0);
    printf("*** End of Concatenating Strings Demo ***\n\n");// repeatedly concatenate a string based on a loop control value.
}