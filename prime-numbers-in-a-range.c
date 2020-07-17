// ----- Program 9 ---- Abhinav Rajesh

#include <stdio.h>
void main()
{
    int n1, n2, i, j, flag = 0;
    char choice;
label:
    printf("\n Enter the range: ");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
    {
        printf("\n First number cannot be greater than second number! Try Again!");
        goto label;
    }
    printf("\n Prime numbers in the range %d - %d are: \n", n1, n2);
    for (i = n1 + 1; i < n2; i++)
    {
        for (j = 1; j <= i; j++)
            if (i % j == 0)
                flag++;
        if (flag == 2)
            printf("%d \n", i);
        flag = 0;
    }
    printf("\n Try Again ? (Y/n): ");
    scanf(" %c", &choice);
    if (choice == 'Y' || choice == 'y')
        goto label;
}