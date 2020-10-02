#include<stdio.h>
long int fact(int n)
{
    if(n==0)
        return 1;
    else if(n>=1)
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial cannot be found.");
        return 1;
    }
    printf("Factorial: %ld", fact(n));
    return 0;
}
