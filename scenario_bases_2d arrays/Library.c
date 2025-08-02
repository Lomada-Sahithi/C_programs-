// CH.SC.U4CSE24027
#include <stdio.h>
//LIBRARY BOOKS
int main() {
    int book[5][4], i, j; //declaring variables and arrays
    int total[5] = {0};
    printf("Enter no.of copies of each book in each shelf: \n");
    for (i = 0; i < 5; i++) { //for loop for input
        printf("Shelf %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            scanf("%d", &book[i][j]);
            total[i] += book[i][j]; //calculating total
        }
    }
    printf("\n No.of copies of 4 books in each shelf:\n"); //display
    for (i = 0; i < 5; i++) {
        printf("shelf %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%d ", book[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal no.of books in each shelf:\n");
    for (i = 0; i < 5; i++) {
        printf("Shelf %d Total: %d\n", i + 1, total[i]);
    }
    int max_total = total[0]; 
    int max = 0;
    for (j = 1; j < 5; j++) {
        if (total[j] > max_total) {
            max_total = total[j];
            max = j;
        }
    }
    printf("\nMAXIMUM NUMBER OF BOOKS : SHELF %d: WITH %d\n", max + 1, max_total);
    return 0;
}
