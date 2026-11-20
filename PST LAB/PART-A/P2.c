//program 2
//Largest of 3 numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3;
    clrscr();
    printf("\n Enter any 3 number: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>=n2 && n1>=n3)
    printf("\n The largest number is: %d",n1);
    else if(n2>=n2 && n2>=n3)
    printf("\n The largest number is: %d",n2);
    else
    printf("\n The largest number is: %d",n3);
    getch();
}

/*
OUTPUT:
Enter any 3 number: 3 6 9
The largest number is: 9
*/