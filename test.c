#include "stdio.h"
#include "stdlib.h"

int main(){
    // char * string; //Point to nothing (bad)

    // int i = 0;

    // for(i < 10; i++;){
    //     string[i] = i + '0';
    // }

    // printf("String is: %s", string);



    /*Dynamic Memory Allocation for String storage*/
    char * str = NULL;
    int len = 0;
    int capacity = 0;

    for(int i = 0; i < 100; i++){
        if(len+1 >= capacity){
            // capacity = capacity == 0 ? 2 : capacity * 2;
            if(capacity == 0){
                capacity = 2;
            }else{
                capacity *= 2;
            }

            char *temp = realloc(str, capacity);
            str = temp;
        }

        str[len] = 'a';
        len++;
        str[len] = '\0';
    }
    printf("String is: %s", str);

}