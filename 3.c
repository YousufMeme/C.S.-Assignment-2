#include<stdio.h>
void main()
{
printf("Program to print sum of odd numbers between 1 till n.\n");
int i,n,sum=0;
printf("Enter n: ");
scanf("%d",&n);
for(i=1;i<=n;i+=2)           //incrementing i with 2, when it starts from 1 gives us 1,3,5,7...n which are then added to sum subsequently.
{
sum+=i;
}
printf("The sum of odd numbers between 1 and %d is: %d",n,sum);
getch();

}
