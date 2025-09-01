// given an array of positive int numbers && interger return the minimul length of a contiguous sub array of which the sum is greater than or euqal to targert if there is no such sub array return 0

// example : arr = [2,3,1,2,4,3], target = 7, subArr = [4,3]
// output : 2

#include <stdio.h>

int minSubArrayLen(int arr[], int n, int target) {
    int 
}

int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = minSubArrayLen(arr, n, target);
    printf("Minimum length of subarray: %d\n", result);
    return 0;
}
