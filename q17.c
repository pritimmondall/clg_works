// given an array of numbers return an array output such that the output array is equal to the product of all the elements of numbers except that number and without using division 

// example : arr = [2,4,6,8]
//           res = [4*6*8, 2*6*8, 2*4*8, 2*4*6]


#include<stdio.h>

int main(){
    int arr[] = {2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int output[n];
    int temp = 1;

    for(int i = 0; i < n; i++){
        output[i] = temp;
        temp *= arr[i];
    }

    temp = 1;
    for(int i = n - 1; i >= 0; i--){
        output[i] *= temp;
        temp *= arr[i];
    }

    for(int i = 0; i < n; i++){
        printf("%d ", output[i]);
    }

    return 0;
}