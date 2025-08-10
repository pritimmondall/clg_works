// a student once a magic board which displays a character for a corrosponding number for his science project. Help him to develop an application  for exe "when the digits  65, 66, 67, 68 are entered the alphabet a, b, c, d is displayed. Assume the number of input should always 4 and the character display should be always in uppercase.


#include <stdio.h>
void displayCharacters(int numbers[4]) {
    for(int i = 0; i < 4; i++) {
        if(numbers[i] >= 65 && numbers[i] <= 90) {
            printf("%c ", numbers[i]);
        } else if(numbers[i] >= 97 && numbers[i] <= 122) {
            printf("%c ", numbers[i] - 32);
        } else {
            printf("Invalid input: %d is not a valid ASCII code for uppercase or lowercase letters.\n", numbers[i]);
        }
    }
    printf("\n");
}

int main() {
    int numbers[4];
    printf("Enter 4 numbers (ASCII codes for uppercase letters): ");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &numbers[i]);
    }
    
    displayCharacters(numbers);
    
    return 0;
}