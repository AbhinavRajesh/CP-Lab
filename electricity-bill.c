// ----Program 2---- Abhinav Rajesh

#include<stdio.h>
void main() {
    int units;
    float amount=0;
    char choice;
    label:
    printf("\n Enter the units of electricity consumed: ");
    scanf("%d", &units);
    if ( units < 0) {
        printf("\n Please enter a valid Unit!");
        goto label;
    } else {
        if ( units <= 200 ) {
            amount = units*0.5;
        } else if ( units <= 400) {
            amount = 100 + (units - 200)*0.65;
        } else if ( units <= 600) {
            amount = 230 + (units - 400)*0.8;
        } else if ( units > 600 ) {
            amount = 390 + (units - 600);
        }
    }
    printf("\n Amount to be paid for %d units is: %f", units, amount);
    printf("\n Want to check another bill? (y,n) \n");
    scanf(" %c", &choice);
    if ( choice == 'y' || choice == 'Y') 
        goto label;
}