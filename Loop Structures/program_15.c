/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>

int main() {
    int start, end, n, i, j;

    // Input
    printf("Enter the starting table number: ");
    scanf("%d", &start);
    printf("Enter the ending table number: ");
    scanf("%d", &end);
    printf("Enter number of multiples: ");
    scanf("%d", &n);

    printf("\nMultiplication tables from %d to %d having %d multiples each:\n\n", start, end, n);

    // Print tables
    for (i = 1; i <= n; i++) {          // Loop for each multiple (1 to n)
        for (j = start; j <= end; j++) { // Loop for each table (start to end)
            printf("%d×%d=%-4d\t", j, i, j * i); // Print in tabular format
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
