#include <iostream>
#include <stdio.h>
#include <string.h>

void isPalindrome(int x, char * str);

int main(){
    std::cout << "Runnign Func";
    char str[10];
    isPalindrome(121, str);
    // isPalindrome(-121);
    // isPalindrome(10);
}

void isPalindrome(int x, char *str){
    std::cout << "\nInitialising Vars";
    int i = 0;
    std::cout << "\nConditional";
    if(x < 0){
        std::cout << x << " is Not a Palindrome\n";
        return;
    }else{
        std::cout << "\nWhile Loop";
        while(x > 0){
            std::cout << "\nBuilding string";
            str[i++] = x % 10 + '0';
            x = x / 10;
        }
        std::cout << "\nPrinting string";
        printf("%s", str);
    }
}
