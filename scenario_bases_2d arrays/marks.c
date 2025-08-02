// CH.SC.U4CSE24027
#include <stdio.h>

#define MAX 5  // Maximum number of elements

int main() {
    int arr[MAX];
    int i = 0, num;

    printf("Enter up to %d positive numbers (-1 to stop):\n", MAX);

start:
    while (i < MAX) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num == -1) {
            break;  // stop input early
        }

        if (num < 0) {
            printf("Negative number skipped.\n");
            continue;  // skip and go to next iteration
        }

        arr[i] = num;
        i++;
    }

    if (i == 0) {
        printf("No valid numbers entered. Exiting...\n");
        goto end;
    }

    printf("\nYou entered:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", arr[j]);
    }

end:
    printf("\nProgram ended.\n");
    return 0;
}
