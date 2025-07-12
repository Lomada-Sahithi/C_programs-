/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//To reverse a number
int main(){
	int i, n, rev=0, num; //Declaring variables
	printf("Enter the number: "); //Input
	scanf("%d", &n); 
	num=n;
	while(n>0){		
		num=n%10;
		rev=rev*10+num;
		n=n/10;
	}
	printf("Reverse: %d", rev ); //Output
	
	return 0;
}
