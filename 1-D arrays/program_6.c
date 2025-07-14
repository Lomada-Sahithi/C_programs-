/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//Merge sorted lists
int main() {
    int a1[100], a2[100], a3[200];
    int n1, n2, n3;
    int i, j, k;

    printf("Enter the number of elements in first sorted array: ");
    scanf("%d", &n1);
    printf("Enter %d sorted elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }    
    printf("Enter the number of elements in second sorted array: ");
    scanf("%d", &n2);
    printf("Enter %d sorted elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    // Merge two sorted arrays
    i = j = k = 0; 
    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            a3[k] = a1[i];
            i++;
        } else {
            a3[k] = a2[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        a3[k] = a1[i];
        i++;
        k++;
    }

    while (j < n2) {
        a3[k] = a2[j];
        j++;
        k++;
    }
    n3 = n1 + n2;
    // Display merged sorted array
    printf("The merged sorted array is:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", a3[i]);
    }
    printf("\n");
    return 0;
}
