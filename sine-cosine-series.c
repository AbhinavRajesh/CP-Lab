// ---- Program 7 ---- Abhinav Rajesh

#include <stdio.h>
#include <math.h>
long factorial(int n)
{
    int i;
    long fact = 1;
    for (i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

void sine(float x, int terms)
{
    float term;
    int sign = 1;
    for (int i = 1; i < 2 * terms; i += 2)
    {
        if (sign)
        {
            printf(" + ");
            sign = 0;
        }
        else
        {
            printf(" - ");
            sign = 1;
        }
        term = (pow(x, i)) / (factorial(i));
        printf("%f", term);
    }
}
void cosine(float x, int terms)
{
    float term;
    int sign = 1;
    for (int i = 0; i < 2 * terms; i += 2)
    {
        if (sign)
        {
            printf(" + ");
            sign = 0;
        }
        else
        {
            printf(" - ");
            sign = 1;
        }
        term = (pow(x, i)) / (factorial(i));
        printf("%f", term);
    }
}

void main()
{
    char choice;
    int terms;
    float x, rad;
    printf("\n Enter the value of x in degrees: ");
    scanf("%f", &x);
    printf("\n Enter the number of terms in series: ");
    scanf("%d", &terms);
    rad = x * 3.14 / 180;
    printf("\n Cosine Series: \n");
    cosine(rad, terms);
    printf("\n Sine Series: \n");
    sine(rad, terms);
}