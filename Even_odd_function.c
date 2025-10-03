//To check even and odd no.
#include<stdio.h>
int main ()
{
     int a;
     printf("Enter a Number");
     scanf("%d", &a);
     if (a%2==0)
     {
        printf("Entered Number is even");
     }
     else
     {
        printf("Entered number is odd");
     }
     return 0;
}