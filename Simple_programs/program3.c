# include <stdio.h>

int main(){
	int m, n; //declaring the variables
	printf("Enter the number"); 
	scanf("%d", &m); // getting the input
	printf("Enter the number");
	scanf("%d", &n);
	if(m>n){ //checking if the number is even
		printf("%d", m); 
	}
	else{
		printf("%d", n);
	}
return 0;
}
