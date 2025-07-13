/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h> 
void main(){
	int n, line_number, number; //declaring variables
	int num=1;
	printf("How many lines: ");
	scanf("%d", &n);
	for(line_number=1; line_number<=n; line_number++){ //Nested loops
		for(number=1; number<=line_number; number++){
			printf("%d\t", num);
			num++;			
		}
		printf("\n");
	}
}
