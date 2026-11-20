//program 5
//Sum of the digits, reverse the number and check it for palindrome
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,num,sum=0,rev=0;
    clrscr();
    printf("\n Enter the number: ");
    scanf("%d",&num);
    n=num;
    while(n)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        rev=rev*10+r;
    }
    printf("\n Sum of the digits = %d",sum);
    printf("\n Reverse of the number = %d",rev);
    if(num==rev)
    printf("\n The number is a Palindrome");
    else
    printf("\n The number is not a Palindrome");
    getch();
}
/*
OUTPUT:
Enter the number: 121
Sum of the digits = 4
Reverse of the number = 121
The number is a Palindrome
Enter the number: 123
Sum of the digits = 6
Reverse of the number = 321
The number is a Palindrome
*/