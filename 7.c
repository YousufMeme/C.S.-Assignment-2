#include<stdio.h>
#include<math.h>
void main()
{
printf("Program to swap first and last digits of a number.\n");
int i,f_num,l_num,count=0;
long n,n1,n2,num;
printf("\nEnter the number: ");
scanf("%ld",&n);
n1=n2=n;
while(n1>0)            //Loop to calculate the number of digits in the given number.
{
  n1/=10;
  count++;
}
f_num=n2/pow(10,count-1);          //Suppose the number is 1234, then f_num will store 1234/10^3 i.e 1, the first digits.
l_num=n%10;                        //The modulus operator gives the last digit.
num=l_num*pow(10,count-1)+n%(int)pow(10,count-1)-l_num+f_num;           //Suppose n is 1234, then num stores 4*1000+1234%1000-4+1=4000+234-4+1=4231,i.e first and last digits swapped.
printf("The number after swapping first and last digit: %ld",num);
getch();
}

