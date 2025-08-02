// CH.SC.U4CSE24027
#include <stdio.h>
//Scores of each player
int main() {
    int game[6][4], i, j; //declaring variables and arrays
    int total[6] = {0};
    printf("Enter score of player in each game: \n");
    for (i = 0; i < 6; i++) { //for loop for input
        printf("Player %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            scanf("%d", &game[i][j]);
            total[i] += game[i][j]; //calculating total
        }
    }
    printf("\n Scores of each player in 4 games:\n"); //display
    for (i = 0; i < 6; i++) {
        printf("Player %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%d ", game[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal score of each player:\n");
    for (i = 0; i < 6; i++) {
        printf("Player %d Total: %d\n", i + 1, total[i]);
    }
    int max_total = total[0]; 
    int max = 0;
    for (j = 1; j < 6; j++) {
        if (total[j] > max_total) {
            max_total = total[j];
            max = j;
        }
    }
    printf("\nPLAYER WITH HIGHEST SCORE : PLAYER %d: WITH %d\n", max + 1, max_total);
    return 0;
}
