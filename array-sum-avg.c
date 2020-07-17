// ---- Program 9 ---- Abhinav Rajesh

#include <stdio.h>
void main()
{
    int a[20], n, i, sum = 0;
    float avg;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\n Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = sum / n;
    printf("\n Sum is %d and Average is %f of the given array is: ", sum, avg);
}