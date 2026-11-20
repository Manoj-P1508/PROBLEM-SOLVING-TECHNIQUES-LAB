//program 3
//Check whether the number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,count=0;
    clrscr();
    printf("\nEnter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    getch();
}
/*
OUTPUT:
Enter the number: 5
5 is a prime number
Enter the number: 6
6 is not a prime number
*/