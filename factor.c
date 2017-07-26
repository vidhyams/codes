#include<stdio.h>
#include<conio.h>
void main()
{
   int factorial,i,m;
   fact = 1;
   printf("Enter the number\t");
   scanf("%d" , &m);
   for(i = 1; i <= m; i++)
   {
       factorial = factorial*m;		
   }
   printf("Factorial of %d is %d", m , fact);
   getch();
}
