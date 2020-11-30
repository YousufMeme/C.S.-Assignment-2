#include<stdio.h>
void main()
{
printf("Program to print all ASCII characters with their values.\n");
int i;
for(i=0;i<=255;i++)   //Since the range of ASCII values is from 0 to 255.
printf("%d %c\n",i,i);

getch();
}
