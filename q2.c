// you are required to implement the following  function largeSmallSum(arr) the function accepts an integer array of size n as it argument you are required to return the sum of 2nd largest element from the even positions and 2nd smallest element from the odd positions in the array.

// assumption: all elements are unique treate the 0th position as an even retunr 0 if the array is empty or has 3 or  less than 3 elements


#include <stdio.h>
#include <limits.h>

int largeSmallSum(int arr[], int n){
    if(n<3)
        return 0;

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            if(arr[i] > largest){
                secondLargest = largest;
                largest = arr[i];
            }else if(arr[i] > secondLargest && arr[i] < largest){
                secondLargest = arr[i];
            }
        } 
        else{
            if(arr[i] < smallest){
                secondSmallest = smallest;
                smallest = arr[i];
            }else if(arr[i] < secondSmallest && arr[i] > smallest){
                secondSmallest = arr[i];
            }
        }
    }
    return secondLargest + secondSmallest;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = largeSmallSum(arr, n);
    printf("The sum of the second largest from even positions and second smallest from odd positions is: %d\n", result);
    
    return 0;
}