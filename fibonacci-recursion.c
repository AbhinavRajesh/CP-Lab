#include<stdio.h>
int fibonacci(int n)
{
    int f=0;
    if(n==1)
        f=1;
    else if(n>1)
        f = fibonacci(n-1)+fibonacci(n-2);
    return f;
}
int main()
{
    int n;
    printf("Enter the no: of elements to be printed for the Fibonacci series: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid number.");
        return 1;
    }
    printf("Fibonacci series: ");
    for(int i=1; i<=n; ++i)
        printf("%d ", fibonacci(i));
    return 0;
}
