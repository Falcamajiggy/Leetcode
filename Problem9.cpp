#include <iostream>
#include <stdio.h>
#include "stdlib.h"

// void isPalindrome(int x, char * str);

// int main(){
//     std::cout << "Runnign Func";
//     char str[10];
//     isPalindrome(121, str);
//     // isPalindrome(-121);
//     // isPalindrome(10);
// }

// void isPalindrome(int x, char *str){
//     std::cout << "\nInitialising Vars";
//     int i = 0;
//     std::cout << "\nConditional";
//     if(x < 0){
//         std::cout << x << " is Not a Palindrome\n";
//         return;
//     }else{
//         std::cout << "\nWhile Loop";
//         while(x > 0){
//             std::cout << "\nBuilding string";
//             str[i++] = x % 10 + '0';
//             x = x / 10;
//         }
//         std::cout << "\nPrinting string";
//         printf("%s", str);
//     }
// }

void isPalindrome(int x);

int main(){
    isPalindrome(121);
    return 0;
}

void isPalindrome(int x){
    char * str = NULL;
    int strLen = 0;
    int strCap = 0;

    if(x < 0){
        std::cout << "Not a Palindrome\n";
        return;
    }else{
        while(x > 0){
            strCap = strCap == 0 ? 2 : strCap+2; //Make Space

            char *temp = realloc(str, strCap);
            str = temp;

            str[strLen] = x % 10 + '0';
            strLen++;
            x /= 10;
            str[strLen] = '\0';
        }
    }

    printf("String is: %s", str);
}