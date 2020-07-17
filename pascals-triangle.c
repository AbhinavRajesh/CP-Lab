// ---- Program 8 ---- Abhinav Rajesh

#include <stdio.h>
void main()
{
    int rows, i, space, j, num;
    printf("\n Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space < rows - i; space++)
            printf(" ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
                num = 1;
            else
                num = num * (i - j + 1) / j;
            printf("%2d", num);
        }
        printf("\n");
    }
}