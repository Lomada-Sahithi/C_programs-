/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
// To display next n characters
int main() {
    int i, n;
    char ch; // Declaring variables
    printf("Enter the number: "); // Input
    scanf("%d", &n);
    printf("Enter the letter: ");
    scanf(" %c", &ch); 
    
    printf("Next %d characters: ", n);
    for (i = 1; i <= n; i++) {
        printf("%c ", ch + i);
    }
    return 0;
}
	
