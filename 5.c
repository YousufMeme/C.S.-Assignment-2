#include<stdio.h>
void main()
{
printf("Program to count number of digits in a number.\n");
long n,t_n;
int i,count=0;
printf("\nEnter the number: ");
scanf("%ld",&n);
t_n=n;
while(t_n>0)       //Loop to calculate the number of digits in the given number.
{
t_n/=10;
count++;
}
printf("\nThe number of digits in %ld are %d.",n,count);
getch();
}
