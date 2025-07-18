/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>

// Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i=0; i<n-1; i++) {        
        for (j=0; j<n-i-1; j++) {   
            if (arr[j]>arr[j + 1]) {     
                temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }
}

int main() {
    int n, i; //Declaring variables
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n); //Function call

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); //Display the array
    }
    return 0;
}

