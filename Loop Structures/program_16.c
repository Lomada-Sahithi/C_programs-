/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//Accept n numbers and display the number having the maximum sum of digits.
void main() {
    int n, i, num, temp, digit, sum, max_sum = 0, max_num; //Declaring variables
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i=1; i<=n; i++) { //Checking conditions
        scanf("%d", &num);
        temp = num;
        sum = 0;
        while(temp != 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        if(sum > max_sum) {
            max_sum = sum;
            max_num = num;
        }
    }
    printf("Number with maximum sum of digits: %d\n", max_num); //output
}
