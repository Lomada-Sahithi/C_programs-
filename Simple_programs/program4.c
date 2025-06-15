# include <stdio.h>

int main(){
	float amount, disc1, disc2; //declaring variables
	printf("Enter amount: ");  //Getting input
	scanf("%f", &amount);
	
//calculating discount
	disc1=15*amount/100;
	disc2=10*amount/100;
	if(amount>5000){
		amount-=disc1;
	}
	else{
		amount-=disc2;
	}
	printf("%f", amount); //final amount after discount is calculated
	
return 0;
}
