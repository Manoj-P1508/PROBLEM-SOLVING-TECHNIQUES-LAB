//find the length of the string without using built in function
#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int len=0;
    clrscr();
    printf("\n Enter the string: ");
    gets(str);
    while(str[len]!='\0')
    {
        len++;
    }
    printf("\n The length of the string is: %d",len);
    getch();
}
/*
OUTPUT:
Enter the string: bca1students
The length of the string is: 12
*/