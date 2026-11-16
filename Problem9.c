// Is Palindrome
#include "stdio.h"
#include "stdlib.h"

bool isPalindrome(int x);

int main(){
    int a = 121;
    int b = -121;
    int c = 10;
    int d = 13231;

    if(isPalindrome(a)){
        printf("\n%d is a palindrome", a);
    }else{
        printf("\n%d is not a palindrome", a);
    }

    if(isPalindrome(b)){
        printf("\n%d is a palindrome", b);
    }else{
        printf("\n%d is not a palindrome", b);
    }

    if(isPalindrome(c)){
        printf("\n%d is a palindrome", c);
    }else{
        printf("\n%d is not a palindrome", c);
    }

    if(isPalindrome(d)){
        printf("\n%d is a palindrome", d);
    }else{
        printf("\n%d is not a palindrome", d);
    }
}

bool isPalindrome(int x){
    int rev=0;
    int dig=0;
    int def=x;

    if(x < 0){
        return false;
    }else{
        while(x > 0){
            dig = x % 10;
            rev = (rev * 10) + dig;
            x /= 10;
        }

        if(rev == def){
            return true;
        }else{
            return false;
        }
    }
}