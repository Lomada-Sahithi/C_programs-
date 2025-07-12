/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//To count the number of digits and sum of the digits
int main(){
	int i, n, count=0, sum=0; //Declaring variables
	printf("Enter the number: "); //Input
	scanf("%d", &n); 
	while(n>0){
		sum+=n%10;
		count++;
		n=n/10;
	}
	printf("Number of Digits: %d\n", count); //Output
	printf("Sum of digits: %d", sum);
	return 0;
}
