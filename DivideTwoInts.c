//Leetcode Problem 29
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

int divide(int dividend, int divisor);

int main(){
    int divid = -2147483648;
    int divis = -1;

    printf("%d ", divide(divid, divis));

    return 0;
}
    // if(dividend > 0 && divisor > 0){ //Both Positive
    //     while(dividend > 0 && dividend >= divisor){
    //         dividend -= divisor;
    //         quotient++;
    //     }
    // }else if(dividend < 0 && divisor > 0){ //Dividend Negative
    //     while(dividend < 0 && dividend <= divisor){
    //         dividend += divisor;
    //         quotient--;
    //     }
    // }else if(dividend > 0 && divisor < 0){ //Divisor Negative
    //     while(dividend > 0 && dividend >= abs(divisor)){
    //         dividend += divisor;
    //         quotient--;
    //     }
    // }else if(dividend < 0 && divisor < 0){ //Both Negative
    //     while(dividend < 0 && dividend <= divisor){
    //         dividend += abs(divisor);
    //         quotient++;
    //     }
    // }

int divide(int dividend, int divisor){
    int quotient = 0;

    if(dividend==INT_MIN && divisor==-1) return INT_MAX;
    if(dividend==INT_MIN && divisor==1) return INT_MIN;


    long long int divd = abs(dividend);
    long long int divs = abs(divisor);

    while(divd > 0 && divd >= divs){
        divd -= divs;
        quotient--;
    }

    if(dividend > 0 && divisor > 0){ //Both Positive
        return abs(quotient);
    }else if(dividend < 0 && divisor > 0){ //Dividend Negative
        return quotient;
    }else if(dividend > 0 && divisor < 0){ //Divisor Negative
        return quotient;
    }else if(dividend < 0 && divisor < 0){ //Both Negative
        return abs(quotient);
    }


}