//swap 2 numbers using pointers
#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a,b;
    clrscr();
    printf("\n enter the value of number1: ");
    scanf("%d",&a);
    printf("\n enter the value of number2: ");
    scanf("%d",&b);
    printf("\n Before swapping: ");
    printf("%d %d",a,b);
    swap(&a,&b);
    printf("\n After swapping: ");
    printf("%d %d",a,b);
    getch();
}
/*
OUTPUT:
enter the value of number1: 10
enter the value of number2: 20
Before swapping: 10 20
After swapping: 20 10
*/