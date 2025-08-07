// a carry is a digit that is transfer to left if sum of digits exceeds 9while addind two numbers from right to left one digit at a time. you are require to implement the following function int numberOfCarries() where the function accepts two numbers num1 and num2 as its argument you are required to calculate and return the total numebr of carries generated while adding digits of two numbers num1 and num2 is >= 0


#include <stdio.h>

int numberOfCarries(int num1, int num2){
    int carry = 0, count = 0;

    while(num1>0 && num2>0){
        int digSum = num1 % 10 + num2 % 10 + carry;
        if(digSum > 9){
            carry = digSum - 9;
            count++;
        }
        num1 /= 10;
        num2 /= 10;
    }

    return count;
}

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = numberOfCarries(num1, num2);
    printf("Number of carries: %d\n", result);
    return 0;
}