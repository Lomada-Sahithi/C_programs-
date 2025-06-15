# include <stdio.h>

int main(){
	float rad, area, circumference; //declaring the variables
	printf("Enter Radius of the circle"); 
	scanf("%f", &rad); // getting the input
//Calculating area and circumference of the circle
	area=3.14*rad*rad; 
	circumference=2*3.14*rad; 
//Displaying the area and circumference
	printf("Area: %f\n", area);  
	printf("Circumference: %f", circumference);
}
