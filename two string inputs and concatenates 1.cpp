#include<stdio.h>
#include <string.h>
int main(void)
{
    char string1[20], string2[20];
    int i, j; 
    memset(string1, 0, 20);
    memset(string2, 0, 20);
    printf("Enter the first string : ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
    printf("First string  = %s\n", string1);
printf("second string =%s\n",string2);
    for (i = 0; string1[i] != '\0'; i++)
    { 
    }
    for (j = 0; string2[j] != '\0'; i++)
    {
        string1[i] = string2[j++];
    } 
    string1[i] = '\0';
printf("concatenated string =%s\n",string1);
}
