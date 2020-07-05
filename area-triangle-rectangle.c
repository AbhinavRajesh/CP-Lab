// ----Program 1---- Abhinav Rajesh

#include<stdio.h>
int rectangle( int l, int b) {
    return l*b;
}
int triangle( int h, int b) {
    return (h*b/2);
}
void main() {
    int l1, l2, n;
    float area;
    char choice;
    label:
    printf("\n --------MENU--------");
    printf("\n 1. Area of Triangle");
    printf("\n 2. Area of Rectangle");
    printf("\n Enter Your Choice (1, 2): ");
    scanf("%d", &n);
    switch(n) {
        case 1: printf("\n Enter the height and base length of the Traingle: ");
                scanf("%d %d", &l1, &l2);
                area = triangle(l1, l2);
                printf("\n Area of Triangle: %f", area);
                break;
        case 2: printf("\n Enter the length and breadth of the Recatangle: ");
                scanf("%d %d", &l1, &l2);
                area = rectangle(l1, l2);
                printf("\n Area of Rectangle: %f", area);
                break;
        default: printf("\n Wrong Choice! Try Again!");
                goto label;
    }
    printf("\n Do you want to continue?(y/n)");
    scanf(" %c", &choice);
    if ( choice == 'y' || choice == 'Y')
        goto label;
}