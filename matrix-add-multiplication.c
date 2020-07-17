// ---- Program 11 ---- Abhinav Rajesh

#include <stdio.h>
void matrixadd(int a[][20], int b[][20], int r, int c)
{
    int i, j, add[20][20];
    printf("\n Matrix Sum :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            printf("%4d", add[i][j]);
        }
        printf("\n");
    }
}
void matrixmulti(int a[][20], int b[][20], int r1, int r2, int c1, int c2)
{
    int i, j, k, multi[20][20], flag = 1;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
        {
            multi[i][j] = 0;
            for (k = 0; k < c1; k++)
                multi[i][j] += a[i][k] * b[k][j];
        }
    printf("\n Matrix Multiplication: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%4d", multi[i][j]);
        printf("\n");
    }
}
void main()
{
    int a[20][20], b[20][20], i, j, r1, r2, c1, c2;
label:
    printf("\n Enter the rows and column of First Matrix :");
    scanf("%d %d", &r1, &c1);
    printf("\n Enter the rows and column of Second Matrix :");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("\n Matrix Addition and Multiplication not possible! Try Again!");
        goto label;
    }
    printf("\n Enter the Elements of First Matrix: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            scanf("%4d", &a[i][j]);
        printf("\n");
    }
    printf("\n Enter the Elements of Second Matrix: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            scanf("%4d", &b[i][j]);
        printf("\n");
    }
    printf("\n Matrix A: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n Matrix B: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }

    if (r1 != r2 || c1 != c2)
        printf("\n Matrix Addition not possible!");
    else
        matrixadd(a, b, r1, c1);
    matrixmulti(a, b, r1, r2, c1, c2);
}