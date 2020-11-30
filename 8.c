#include<stdio.h>
void main()
{
printf("Program to find frequency of each digit in an integer.\n");
int i,count[10],l_num;
long n;
printf("\nEnter the number: ");
scanf("%ld",&n);
for(i=0;i<10;i++)
{
 count[i]=0;
}
while(n>0)
{
l_num=n%10;
n=n/10;
count[l_num]++;            //the index of count goes from 0 to 9, and whenever any of that digit is encountered in n, the respective index gets incremented by 1
}                           //i.e if l_num is 4, then count[4] is incremented by 1, and this goes on till each digit is encountered.
printf("\n");
for(i=0;i<10;i++)
{
printf("The frequency of %d is %d\n",i,count[i]);
}
getch();
}
