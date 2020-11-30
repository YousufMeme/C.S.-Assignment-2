#include<stdio.h>
void main()
{
printf("Program to print multiplication table of any number.\n");
int i,n;
printf("\nEnter the number: ");
scanf("%d",&n);
printf("Multiplication table of %d is:\n",n);
for(i=1;i<=10;i++)
{
 printf("%d * %d = %d \n",n,i,n*i);
}
getch();
}
