// CH.SC.U4CSE24027
#include <stdio.h>
//TEMPERATURE FOR 7 DAYS
int main() {
    int temp[7][3], i, j; //declaring variables and arrays
    float avg_temp[7] = {0};
    printf("Enter Temperatures of morning, afternoon, evening: \n");
    for (i = 0; i < 7; i++) { //for loop for input
        printf("Day %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &temp[i][j]);
            avg_temp[i] += temp[i][j]; //calculating avg
        }
         avg_temp[i] /= 3;
    }
    printf("\nTemperature on each day:\n"); //display
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }
    printf("\nAverage Temperature for each day:\n");
    for (j = 0; j < 7; j++) {
        printf("Day %d: %.2f\n", j + 1, avg_temp[j]);
    }
    float max_avg = avg_temp[0]; //highest AVG_TEMP
    int highest = 0;
    for (j = 1; j < 7; j++) {
        if (avg_temp[j] > max_avg) {
            max_avg = avg_temp[j];
            highest = j;
        }
    }
    printf("\nHIGHEST AVG_TEMP: DAY %d : %.2f\n", highest + 1, max_avg);
    return 0;
}
