//generate fibonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,n,i;
    clrscr();
    printf("\n Enter the no of term: ");
    scanf("%d",&n);
    printf("\n Fibonacci Series: %d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    getch();
}
/*
OUTPUT:
Enter the no of term: 5
Fibonacci Series: 0 1 1 2 3 
*/
