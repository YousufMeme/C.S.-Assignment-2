#include<stdio.h>
void main()
{
printf("Program to print even numbers lying between 1 and 100.\n\n");
int i;
printf("Even numbers lying between 1 to 100 are:\n");
for(i=1;i<=100;i++)
{
  if(i%2==0)            //since if any integer leaves remainder 0 on division with 2 is even.
  printf("%d ",i);
}
getch();
}
