#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    printf("Enter character:\n");
    scanf(" %c", &ch);  //input
    while (ch != '*') {
    	printf("Enter character:\n");
		scanf(" %c", &ch);  //input
        count++; // counting no.of characters entered
    }
    printf("Total characters entered: %d", count);// displaying total no.of characters

    return 0;
}
