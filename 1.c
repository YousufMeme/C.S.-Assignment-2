#include<stdio.h>
void main()
{
printf("Program to print all the alphabets from a to z.\n");
char c;
printf("Letters from a t o z are: ");
for(c=97;c<=122;c++)    //Since the Ascii values of a to z lies in the range 97 to 122
printf("%c ",c);
getch();
}
