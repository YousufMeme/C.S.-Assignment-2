#include<stdio.h>
#include<math.h>
void main()
{
printf("Program to find first and last digits of a number.\n");
int i,count=0,f_num,l_num;
long n,n1,n2;
printf("\nEnter n: ");
scanf("%ld",&n);
n1=n2=n;
while(n1>0)                //Loop to calculate the number of digits in the given number.
{
n1/=10;
count++;
}
f_num=n2/pow(10,count-1);              //Suppose the number is 1234, then f_num will store 1234/10^3 i.e 1, the first digits.
l_num=n%10;                            //The modulus operator gives the last digit.
printf("\nFirst digit: %d\n",f_num);
printf("Last digit: %d",l_num);
getch();
}
