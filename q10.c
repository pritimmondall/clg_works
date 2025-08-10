// write a program in c it will take a lower limit and upper limit as inputs and print all the inermidiate palindrome numbers

#include <stdio.h>

int isPalindrome(int num){
    int temp = num, rev = 0;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return num == rev;
}

int main(){
    int lower, upper;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    
    printf("Palindrome numbers between %d and %d are:\n", lower, upper);
    for(int i = lower; i <= upper; i++){
        if(isPalindrome(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}