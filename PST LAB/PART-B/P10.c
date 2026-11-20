//program 20
//print the pattern using nested loops
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n=5;
    clrscr();
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("* ");
        printf("\n");
    }
    getch();
}
/*

OUTPUT:
            * 
        *       * 
    *       *        * 
*       *       *       *

*/