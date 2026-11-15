#include "stdio.h"

int main(){
    char * string; //Point to nothing (bad)

    int i = 0;

    for(i < 10; i++;){
        string[i] = i + '0';
    }

    printf("String is: %s", string);
}