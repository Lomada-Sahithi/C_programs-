#include <stdio.h>

int main() {
    int i, mark, count = 0; // variables

    for(i = 1; i <= 5; i++) { 
        printf("Enter the mark of student: ");// getting students marks as input
        scanf("%d", &mark);

        if(mark >= 40) {
            count++;
        }
    }

    printf("Number of students passed: %d\n", count); //displaying the number of students passed
    
    return 0;
}
