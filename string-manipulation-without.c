// ---- Program 12 ---- Abhinav Rajesh
#include <stdio.h>
int length(char s1[])
{
    int stringLength = 0;
    for (int i = 0; s1[i] != '\0'; i++, stringLength++)
        ;
    return stringLength;
}
void comparison(char s1[], char s2[], int s1len)
{
    int comp = 1, i;
    for (i = 0; i < s1len; i++)
        if (s1[i] != s2[i])
            comp = 0;
    if (comp)
        printf("\n Both the strings are same!");
    else
        printf("\n Both the Strings are different!");
}
void concat(char s1[], char s2[], int s1len)
{
    int i, j;
    for (i = s1len, j = 0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("\n Concatenated String is: %s", s1);
}
void copy(char s1[], char s2[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        s1[i] = s2[i];
    s1[i] = '\0';
    printf("\n Copied String is: %s", s1);
}
void main()
{
    char s1[20], s2[20], s3[20];
    int s1len, s2len;
    printf("\n Enter the First String: ");
    gets(s1);
    printf("\n Enter the Second String: ");
    gets(s2);
    s1len = length(s1);
    s2len = length(s2);
    printf("\n String 1: ");
    puts(s1);
    printf("\n String 2: ");
    puts(s2);
    printf("\n Length of String 1: %d", s1len);
    printf("\n Length of String 2: %d", s2len);
    if (s1len == s2len)
        comparison(s1, s2, s1len);
    else
        printf("\n Both the strings are different!");
    copy(s3, s1, s1len);
    concat(s3, s2, s1len);
    copy(s1, s2, s2len);
}