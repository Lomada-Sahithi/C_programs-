/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//To print Armstrong numbers between 1 and 500
void main() {
    int num, temp, digit, result; //Declaring variables
    printf("Armstrong numbers between 1 and 500 are:\n");
    for(num = 1; num <= 500; num++) {
        temp = num;
        result = 0;
        while(temp != 0) {
            digit = temp % 10;      
            result += digit * digit * digit; 
            temp /= 10;              
        }
        if(result == num) {
            printf("%d\n", num);
        }
    }
}
