/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//To display prime numbers between __and __
int main() {
    int x, y, i, j; //Declaring variables
    scanf("%d %d", &x, &y);
    for(i = x; i <= y; i++) {
        if (i < 2) continue; 
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                break;
            }
        }
        if(j > i / 2) { 
            printf("%d ", i);
        }
    }
    return 0;
}
