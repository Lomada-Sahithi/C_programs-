// CH.SC.U4CSE24027
#include <stdio.h>

int main() {
    int ratings[viewers][movie], i, j; //declaring variables and arrays
    float avg[movie] = {0};
    for (i = 0; i < viewers; i++) { //for loop for input
        printf("Viewer %d:\n", i + 1);
        for (j = 0; j < movie; j++) {
            printf("  Movie %d: ", j + 1);
            scanf("%d", &ratings[i][j]);
            avg[j] += ratings[i][j]; //calculating avg
        }
    }
    for (j = 0; j < movie; j++) {
        avg[j] /= viewers;
    }
    printf("\nRatings given by each viewer:\n"); //display
    for (i = 0; i < viewers; i++) {
        printf("Viewer %d: ", i + 1);
        for (j = 0; j < movie; j++) {
            printf("%d ", ratings[i][j]);
        }
        printf("\n");
    }
    printf("\nAverage rating for each movie:\n");
    for (j = 0; j < movie; j++) {
        printf("Movie %d: %.2f\n", j + 1, avg[j]);
    }
    float max_avg = avg[0]; //highest rating
    int best = 0;
    for (j = 1; j < movie; j++) {
        if (avg[j] > max_avg) {
            max_avg = avg[j];
            best = j;
        }
    }
    printf("\nHIGHEST RATING: MOVIE %d (%.2f)\n", best + 1, max_avg);
    return 0;
}
