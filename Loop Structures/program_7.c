/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
/* accept real number x and integer n and calculate 
the sum of first n terms of the series x+ 3x+5x+7x+…*/
int main() {
    int i, n, x, sum=0, coeff=1;
    printf("Enter the number(x): "); // Input
    scanf("%d", &x);
    printf("Enter the number(n): ");
    scanf(" %d", &n); 
    
    for (i=1; i<=n; i++){
    	sum=sum+coeff*x;
    	coeff+=2;
	}
	printf("Sum: %d", sum);
    return 0;
}
	
