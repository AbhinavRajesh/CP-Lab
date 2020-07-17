// ----Program 13 ---- Abhinav Rajesh
#include <stdio.h>
#include <string.h>
void sortName(char name[][20], int n)
{
    int i, j;
    char temp[20];
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
}
void main()
{
    int i, n;
    char name[20][20];
    printf("\n Enter the number of students: ");
    scanf("%d", &n);
    printf("\n Enter the names of the students: ");
    for (i = 0; i < n; i++)
        scanf("%s", name[i]);
    sortName(name, n);
    printf("\n Name sorted in Alphabetical Order: \n");
    for (i = 0; i < n; i++)
        printf("%s \n", name[i]);
}