// ----Program 4---- Abhinav Rajesh

#include<stdio.h>
float Add(int a, int b) {
    return (a + b);
}
float Sub(int a, int b) {
    return (a - b);
}
float Multiply(int a, int b) {
    return a*b;
}
float Divide(int a, int b) {
    return a/b;
}
void main() {
    int n, a, b;
    char choice; // Used to check if the user wants to run the program again
    float result;
    label:
    printf("\n ----CALCULATOR----");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n Enter your choice: ");
    scanf("%d", &n);
    switch(n) {
        case 1: printf("\n Enter the numbers to be added: ");
                scanf("%d %d", &a, &b);
                result = Add(a,b);
                printf("\n Sum of %d and %d = %f", a, b, result);
                break;
        case 2: printf("\n Enter the numbers to be Subtracted: ");
                scanf("%d %d", &a, &b);
                result = Sub(a,b);
                printf("\n Difference of %d and %d = %f", a, b, result);
                break;
        case 3: printf("\n Enter the numbers to be Multiplied: ");
                scanf("%d %d", &a, &b);
                result = Multiply(a,b);
                printf("\n Product of %d and %d = %f", a, b, result);
                break;
        case 4: printf("\n Enter the numbers to be Divided: ");
                scanf("%d %d", &a, &b);
                result = Divide(a,b);
                printf("\n Division of %d by %d = %f", a, b, result);
                break;
        default: printf("\n Wrong Choice! Try Again!");
                goto label;
    }
    printf("\n Do you want to continue? (y, N):");
    scanf(" %c", &choice);
    if( choice == 'y' || choice == 'Y' )
        goto label;
}