#include<stdio.h>
void name_thousands(int a1)      //Function to print the thousandths digit's name
{
switch(a1)
    {
       case 1: printf("One Thousand ");
               break;
       case 2: printf("Two Thousand ");
               break;
       case 3: printf("Three Thousand ");
               break;
       case 4: printf("Four Thousand ");
               break;
       case 5: printf("Five Thousand ");
               break;
       case 6: printf("Six Thousand ");
               break;
       case 7: printf("Seven Thousand ");
               break;
       case 8: printf("Eight Thousand ");
               break;
       case 9: printf("Nine Thousand ");
               break;
    }
}

void name_hundreds(int b1)     //Function to print the Hundredth digit's name
{
 switch(b1)
   {
       case 0: break;
       case 1: printf("One Hundred ");
               break;
       case 2: printf("Two Hundred ");
               break;
       case 3: printf("Three Hundred ");
               break;
       case 4: printf("Four Hundred ");
               break;
       case 5: printf("Five Hundred ");
               break;
       case 6: printf("Six Hundred ");
               break;
       case 7: printf("Seven Hundred ");
               break;
       case 8: printf("Eight Hundred ");
               break;
       case 9: printf("Nine Hundred ");
               break;
   }

}

void name_tens(int c1,int d1)     //Function to print tenth digit's name.
{
  switch(c1)
   {
       case 0:name_ones(d1);
              break;
       case 1:switch(d1)
              {
                  case 0: printf("Ten ");
                          break;
                  case 1: printf("Eleven");
                          break;
                  case 2: printf("Twelve ");
                          break;
                  case 3: printf("Thirteen ");
                          break;
                  case 4: printf("Fourteen ");
                          break;
                  case 5: printf("Fifteen ");
                          break;
                  case 6: printf("Sixteen ");
                          break;
                  case 7: printf("Seventeen ");
                          break;
                  case 8: printf("Eighteen ");

                          break;
                  case 9: printf("Nineteen ");

                          break;
        }break;
       case 2: printf("Twenty ");
               name_ones(d1);
               break;
       case 3: printf("Thirty ");
               name_ones(d1);
               break;
       case 4: printf("Fourty ");
               name_ones(d1);
               break;
       case 5: printf("Fifty ");
               name_ones(d1);
               break;
       case 6: printf("Sixty ");
               name_ones(d1);
               break;
       case 7: printf("Seventy ");
               name_ones(d1);
               break;

       case 8: printf("Eighty ");
               name_ones(d1);
               break;
       case 9: printf("Ninety ");
               name_ones(d1);
               break;
     }
}

void name_ones(int n)     //Function to print the digit present at one's place.
{
    switch(n)
    {

      case 0: break;
      case 1: printf("One ");
              break;
      case 2: printf("Two ");
              break;
      case 3: printf("Three ");
              break;
      case 4: printf("Four ");
              break;
      case 5: printf("Five ");
              break;
      case 6: printf("Six ");
              break;
      case 7: printf("Seven ");
              break;
      case 8: printf("Eight ");
              break;
      case 9: printf("Nine ");
              break;
    }
}

void main()
{
printf("Program to print a number in words.\n");
int count=0,num,n1,n2,n3,a,b;
printf("\nEnter the number: ");
scanf("%d",&num);

if(num==0)
printf("The number in words is: Zero");

else if(num<10000)    //Since the max. limit is 9999
{
 n1=num;
  while(n1!=0)        //Loop to calculate the number of digits present in the number.
  {
    n1=n1/10;
    count++;
  }
a=b=num;
printf("The number in words is: ");

if(count==4)
 name_t(num);       //Calling the name_t function, which then calls the functions name_thousands,hundreds ,tens and ones function subject to the digits present in num.

else if(count==3)
 name_h(num);       //Calling the name_h function, which then calls the functions name_hundreds ,tens and ones function subject to the digits present in num.

else if(count==2)
{
  n2=a/10,
  n3=b%10;
  name_tens(n2,n3);   //Directly calling the tens function after separating the digits present in a num<100
}

else
 name_ones(num);     //Directly calling the ones function since digits present in num<10
}

else
 printf("Input not Supported.");    //For any non-zero number greater than 9999
getch();
}

void name_t(int n) //Function which calls the functions thousands hundreds,tens and ones subject to the digits present in the number
{
 int a[4],i=3,n1=n;
 while(n1!=0)       //Assigning the 4 digit number in a 1D array with index 0 to 3.
 {
     a[i]=n1%10;
     n1/=10;
     i--;
 }
name_thousands(a[0]);
name_hundreds(a[1]);
name_tens(a[2],a[3]);
}

void name_h(int n) //Function which calls the functions hundreds,tens and ones subject to the digits present in the number
{
 int a[3],i=2,n1=n;
 while(n1!=0)       ////Assigning the 3 digit number in a 1D array with index 0 to 2.
 {
     a[i]=n1%10;
     n1/=10;
     i--;
 }
name_hundreds(a[0]);
name_tens(a[1],a[2]);
}



