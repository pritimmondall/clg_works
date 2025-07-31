// the function differenceOfSum(n, m) accepts two integers n and m as arguments find the sum of all numbers in range from 1 to m both inclusive that are not divisible by n. Return the difference between the sum of all integer divisible by n with the sum of all integers not divisible by n. 

// assume that n and m are positive integers and m is greater than or equal to n. sum lies between integer range



#include <stdio.h>

int differenceOfSum(int n, int m){
    int sumDivisible = 0, sumNotDivisible = 0;
    for(int i=1; i<=m; i++){
        if(i % n == 0){
            sumDivisible += i; 
        } else {
            sumNotDivisible += i; 
        }
    }
    return  sumNotDivisible - sumDivisible;
}

int main(){
    int n, m;
    printf("Enter two integers n and m: ");
    scanf("%d %d", &n, &m);
    
    int result = differenceOfSum(n, m);
    printf("The difference of sums is: %d\n", result);
    
    return 0;
}





