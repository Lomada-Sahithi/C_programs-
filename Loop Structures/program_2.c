/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//Printing sum of numbers between two numbers
int main(){
	int i, x, y, sum=0; //Declaring variables
	printf("Enter the first number: "); //Input
	scanf("%d", &x); 
	printf("Enter the second number: ");
	scanf("%d", &y); 
	for(i=x; i<=y; i++){ //Loop
		sum+=i;	
	}
	printf("Sum of th numbers: %d", sum);
	return 0;
}
