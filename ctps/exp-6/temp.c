
/*
#include<stdio.h>
#include<math.h>
int main(){
    int arr[50], i, len_of_binary, temp, dec_number=0;
    double p;

    //printf("Power 2*3 %d",pow(2,3));

    printf("Enter a binary number length: ");
    scanf("%d", &len_of_binary);

    printf("\nEnter binary number: ");
    for(i=0;i<len_of_binary;i++){
        scanf("%d", &temp);

        if(temp == 1 || temp == 0){
            arr[i]=temp;
        }
        else{
            printf("Wrong input");
            break;
        }
    }

    // Convert to decimal
    for(i=len_of_binary-1;i>=len_of_binary;i--){
        p=pow(2,i);
        dec_number=(arr[i]*p) + dec_number;
    }

    printf("Decimal equivalent is: %d", dec_number);


    return 0;
}

*/