/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
/* To read characters till EOF (Ctrl+Z) and 
   count the total number of characters entered. */
int main() {
    char ch; 
    int count = 0;
    printf("Enter characters (Press Ctrl+Z then Enter to end):\n");
    while ((ch = getchar()) != EOF) {
        if (ch != '\n') { 
            count++;
        }
    }
    printf("Total characters = %d\n", count);
    return 0;
}
