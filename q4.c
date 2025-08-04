// write a program to calculate the sum of the diagonal elements of a square matrix



#include <stdio.h>

int main(){
    int n, i, j, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < n; i++){
        sum += matrix[i][i]; // main diagonal
        if(i != n - 1 - i) { // avoid double counting the middle element in odd-sized matrices
            sum += matrix[i][n - 1 - i]; // secondary diagonal
        }
    }
    
    printf("Sum of diagonal elements: %d\n", sum);
    
    return 0;
}