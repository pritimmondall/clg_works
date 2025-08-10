// calculate the sum of the numbers which are divisible by 3 and 5 in the range of m to n 

#include <stdio.h>

int sumDivBy3And5(int m, int n){
    int sum = 0;
    for(int i=m; i<=n; i++){
        if(i%3 == 0 && i%5 == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int m, n;
    printf("Enter the range (m n): ");
    scanf("%d %d", &m, &n);
    int result = sumDivBy3And5(m, n);
    printf("Sum of numbers divisible by 3 and 5 in the range: %d\n", result);
    return 0;
}