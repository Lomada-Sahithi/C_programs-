/*Lomada Sahithi
CH.SC.U4CSE24027*/
#include <stdio.h>
// Function to convert decimal to binary
void decimalToBinary(int num) {
    int binary[32], i=0;
    if (num==0) {
        printf("Binary: 0\n");
        return;
    }
    while (num>0) {
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    printf("Binary: ");
    for (i=i-1; i>=0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int num) {
    int octal[32], i=0;
    if (num==0) {
        printf("Octal: 0\n");
        return;
    }
    while (num>0) {
        octal[i]=num % 8;
        num=num/8;
        i++;
    }
    printf("Octal: ");
    for (i=i-1; i>=0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int num) {
    char hex[32];
    int i=0, remainder;
    if (num==0) {
        printf("Hexadecimal: 0\n");
        return;
    }
    while (num>0) {
        remainder=num%16;
        if (remainder<10)
            hex[i]=remainder+'0';
        else
            hex[i]=remainder-10+'A';
        num=num/16;
        i++;
    }
    printf("Hexadecimal: ");
    for (i=i-1;i>=0; i--) {
        printf("%c", hex[i]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decimalToBinary(num);
    decimalToOctal(num);
    decimalToHexadecimal(num);

    return 0;
}
