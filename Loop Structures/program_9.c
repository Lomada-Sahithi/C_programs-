/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
// To display the number in words
int main() {
	int i, n, rev=0, num, digit; //Declaring variables
	printf("Enter the number: "); //Input
	scanf("%d", &n); 
	num=n;
	while(n>0){		
		num=n%10;
		rev=rev*10+num;
		n=n/10;
	}
	while (rev > 0) {
        digit = rev % 10;
        
        switch (digit) {
            case 0: printf("Zero"); break;
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
        rev /= 10;
        if (rev > 0) {
            printf("-");
        }
    }  
    return 0;
}
	
