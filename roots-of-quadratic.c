// ---- Program 3---- Abhinav Rajesh

#include<stdio.h>
#include<math.h>
void main() {
    int a, b, c, D;
    float root1, root2;
    char choice;
    label:
    printf("\n Enter the value of a,b and c in the equation: \n ax^2 + bx + c = 0 \n");
    scanf("%d %d %d", &a, &b, &c);
    D = pow(b, 2) - 4*a*c;
    if ( D < 0) {
        printf("\n Roots of the quadratic equation: %dx^2 + %dx + %d = 0 are imaginary!", a,b,c);
    } else if ( D == 0) {
        root1 = -b/(2*a);
        printf("\n Roots of the quadratic equation: %dx^2 + %dx + %d = 0 are Equal and is %f :", a,b,c, root1);
    } else {
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        printf("\n Roots of the quadratic equation: %dx^2 + %dx + %d = 0 are %f and %f", a,b,c, root1, root2);
    }
    printf("\n Do you want to continue? (y, N):");
    scanf(" %c", &choice);
    if( choice == 'y' || choice == 'Y' )
        goto label;
}