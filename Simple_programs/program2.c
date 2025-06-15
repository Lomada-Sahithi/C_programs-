# include <stdio.h>

int main(){
	int m, n; //declaring the variables
	printf("Enter the number"); 
	scanf("%d", &m); // getting the input
	printf("Enter the number");
	scanf("%d", &m);
	if(m%2==0){ //checking if the number is even
		printf("%d is Even\n", m); 
	}
	else{
		printf("%d is not even", m);
	}
return 0;
}
