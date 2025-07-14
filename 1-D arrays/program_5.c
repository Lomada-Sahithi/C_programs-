/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
//Find intersection of two sets

int main() {
    int n1, n2, n3 = 0, i, j;
    printf("Enter the number of elements in Set 1: ");
    scanf("%d", &n1);
    int set1[n1];
    printf("Enter %d elements of Set 1:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }
    
    printf("Enter the number of elements in Set 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements of Set 2:\n", n2);
    int set2[n2];
    for (i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }

    int intersection[100];
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                intersection[n3] = set1[i];
                n3++;
                break;
            }
        }
    }
    // Display intersection
    if (n3 == 0) {
        printf("The intersection of the two sets is empty.\n");
    } else {
        printf("The intersection of the two sets is: ");
        for (i = 0; i < n3; i++) {
            printf("%d ", intersection[i]);
        }
        printf("\n");
    }

    return 0;
}
