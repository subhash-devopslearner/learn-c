/*
Execute a C program to use an array for storing and 
displaying the binary equivalent of a user-entered decimal number.
*/
#include <stdio.h>

int main() {
    int decimal, binary[32];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Special case when number is 0
    if (decimal == 0) {
        printf("Binary equivalent: 0");
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Display binary number in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>

int main(){

    int arr[50], i, num, numcopy, count=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    numcopy=num;

    if(num==0){
        printf("\nBinary equivalent of %d is: 0", num);
        exit(0);
    }

    // Convert decimal binary
    for(i=0;num!=0;i++){
        arr[i]=num%2;
        num=num/2;
        count++;
    }

    // display binary number
    printf("\nBinary equivalent of %d is: ", numcopy);
    for(i=count-1;i>=0;i--){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}

*/