//Leetcode Problem 29
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

int divide(int dividend, int divisor);

int main(){
    int divid = -15;
    int divis = -5;

    printf("%d ", divide(divid, divis));

    return 0;
}

int divide(int dividend, int divisor){
    int quotient = 0;

    if(dividend==INT_MIN && divisor==-1) return INT_MAX;
    if(dividend==INT_MIN && divisor==1) return INT_MIN;

    if(dividend > 0 && divisor > 0){ //Both Positive
        while(dividend > 0 && dividend >= divisor){
            dividend -= divisor;
            quotient++;
        }
    }else if(dividend < 0 && divisor > 0){ //Dividend Negative
        while(dividend < 0 && dividend <= divisor){
            dividend += divisor;
            quotient--;
        }
    }else if(dividend > 0 && divisor < 0){ //Divisor Negative
        while(dividend > 0 && dividend >= abs(divisor)){
            dividend += divisor;
            quotient--;
        }
    }else if(dividend < 0 && divisor < 0){ //Both Negative
        while(dividend < 0 && dividend <= divisor){
            dividend += abs(divisor);
            quotient++;
        }
    }

    return quotient;
}