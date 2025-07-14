/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//To accept array and print reverse of the given array

// Function to accept array elements
void Array(int arr[], int n) {
	int i;
    for (i=0; i<n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
}
// Function to display array elements in reverse order
void Reverse(int arr[], int n) {
	int i;
    for (i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() { //Main function
    int n, arr[100]; //Declaring variables
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    Array(arr, n); //Function call
    
    printf("Array in reverse order: ");
    Reverse(arr, n); //Function call
    return 0;
}

