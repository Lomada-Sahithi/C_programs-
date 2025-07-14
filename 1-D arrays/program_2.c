/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//To print prime numbers into an array
int main() {
    int i, j, n, num, count=0, isPrime;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int prime[n];
    for (i=0; i<n; i++) {
        printf("Enter the element: ");
        scanf("%d", &num);

        if (num<=1) {
            continue; 
        }
        isPrime = 1;
        for (j=2; j<=num/2; j++) {
            if (num%j==0) {
                isPrime = 0; // Not prime
                break;
            }
        }
        if(isPrime) {
            prime[count] = num;
            count++;
        }
    }
    // Print all prime numbers
    printf("Prime numbers are: ");
    for (i = 0; i<count; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");
    return 0;
}
