/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>

void main() {
    int num, i, sum;

    printf("Perfect numbers below 500 are:\n");

    for(num = 1; num < 500; num++) {
        sum = 0;

        // Find divisors of num and add them
        for(i = 1; i <= num / 2; i++) {
            if(num % i == 0) {
                sum += i;
            }
        }

        // Check if sum of divisors equals num
        if(sum == num) {
            printf("%d\n", num);
        }
    }
}
