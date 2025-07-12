/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//To compute x^n
int main(){
	int i, x, n, ans; //Declaring variables
	printf("Enter the number: "); //Input
	scanf("%d", &x); 
	printf("Enter the exponent: ");
	scanf("%d", &n);
	ans=x; 
	for(i=1; i<n; i++){ //Loop
		ans*=x;	
	}
	printf("%d^%d: %d", x, n, ans);
	return 0;
}
