// ----Program 5----Abhinav Rajesh

#include<stdio.h>
void main() {
    int n, m, digit, sum = 0;
    char choice;
    label:
    printf("\n Enter the number whose sum of digit is to be found: ");
    scanf("%d", &n);
    m = n;
    while( m > 0) {
        digit = m%10;
        sum+= digit;
        m = m/10;
    }
    printf("\n Sum of digits of %d = %d", n, sum);
    printf("\n Do you want to continue? (y, N):");
    scanf(" %c", &choice);
    if( choice == 'y' || choice == 'Y' ){
        sum = 0;
        goto label;
    }
}