//14. Longest Common Prefix
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char * longestCommonPrefix(char ** strs, int strsSize);
void addChar(char * s, char c);

int main(){
    char* strs[] = {"flower", "flow", "flight"};
    int strsSize = 3;
    char * out = longestCommonPrefix(strs, strsSize);

    printf("Prefix is: %s", out);
    return 0;
}

char * longestCommonPrefix(char ** strs, int strsSize){
    char * res = "";
    int counter = 0;

        /*
            Loop over every string

            check that the first chars match, if not: return ""

            if they do, then check the second, repeat until no match. return string.

        */

    for(int i=1;i<strsSize;i++){
        for(int j=0; j<strlen(strs[0]); i++){
            if(strs[i][j] == strs[0][j]){
                counter++;
            }
            if(counter == strsSize){
                addChar(res, strs[i][j]);
            }
        }
    }


}


void addChar(char *s, char c) {

  	// Move pointer to the end
    while (*s++);

    // Append the new character
    *(s - 1) = c;

    // Add null terminator to mark new end
    *s = '\0';
}