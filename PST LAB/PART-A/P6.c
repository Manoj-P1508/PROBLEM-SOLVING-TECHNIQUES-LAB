//program 6
//Read numbers from keyboard continuously till user presses 999
//find the sum of only positive numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    clrscr();
    printf("\n Press 999 to stop \n Enter the numbers both positive and negative:\n");
    scanf("%d",&n);
    while(n!=999)
    {
        if(n>0)
        sum+=n;
        scanf("%d",&n);
    }
    printf("\n Sum of Positive numbers: %d",sum);
    getch();
}
/*
OUTPUT:
Press 999 to stop 
Enter the numbers both positive and negative:
5
3-2-1
0
2
999
Sum of Positive numbers: 10
*/