# include <stdio.h>

int main(){
	int num, digit;
	int sum=0; //declaring the variables
	printf("Enter the number"); 
	scanf("%d", &num); // getting the input
	while(num>0){ //calculating the sum of digits
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("%d sum of the digits is: ", sum);

return 0;
}
