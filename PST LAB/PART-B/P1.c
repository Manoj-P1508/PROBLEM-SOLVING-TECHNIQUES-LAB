//find the factorial of number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fact=1,i;
    clrscr();
    printf("\n Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    printf("\n Factorial of %d is %d",n,fact);
    getch();
}
/*
OUTPUT:
Enter a number: 5
Factorial of 5 is 120
*/