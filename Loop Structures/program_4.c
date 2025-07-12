/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//To Check if a given number is prime or not
int main(){
	int i, n; //Declaring variables
	printf("Enter the number: "); //Input
	scanf("%d", &n); 
	int count=0;
	for(i=2; i<n; i++){ //Loop
		if(n%i==0){
			count+=1;			
		}	
	}
	if(count==0){
		printf("%d is a Prime number", n);//output
	}else{
		printf("%d is not a prime number", n);
	}
	return 0;
}
