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
    int len = 0;            //Treated Like active/present/current length of the string
    int capacity = 0;

    for(int i = 0; i < 100; i++){ //i's comparison value is really the lenght of the string
        if(len+1 >= capacity){
            // capacity = capacity == 0 ? 2 : capacity * 2;
            if(capacity == 0){
                capacity = 2;
            }else{
                /*
                Doubling is arbitrary
                Could increment by one (to match the lenght comparison)
                But that would increase the time complexity,
                but it is a worthy trade for saving program memory
                */
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

    free(str); //Good Practice
    return 0;
}