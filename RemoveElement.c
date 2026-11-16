//Leetcode Problem 27
#include "stdio.h"

int removeElement(int * nums, int numsSize, int val);

int main(){
    int nums[] = {2, 2, 3, 1, 4, 3, 5, 3, 3, 4};
    int numSize = 10;
    int val = 3;
    removeElement(nums, numSize, val);
}

int removeElement(int * nums, int numsSize, int val){
    /*
    Remove every occurance of val in nums
    Then return the number of elements that are not equal to val
    */

    // for(int i =0; i < numsSize; i++){
    //     if(nums[i] == val){
    //         for(int j=0; j < numsSize-i-1; j++){
    //             nums[i+j] = nums[i+j+1];
    //         }
    //         // nums[numsSize] = 0;
    //         numsSize--;
    //     }
    // }

    // for(int i = 0; i < numsSize; i++){
    //     printf("%d ", nums[i]);
    // }

    // return numsSize;
}