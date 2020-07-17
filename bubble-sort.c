// ---- Program 10 ---- Abhinav Rajesh

#include <stdio.h>
void main()
{
    int n, a[20], i, j, temp;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\n Enter the elements in the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n The given array is :");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    printf("\n The Sorted Array is :");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}