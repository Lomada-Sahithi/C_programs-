/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>

int main(){
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=0; i<=n; i++){
		if(i%2==0){
			printf("%d\t", i);	
		}		
	}
	return 0;
}
