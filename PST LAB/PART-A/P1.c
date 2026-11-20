//program 1
//Find area and circumference of circle
#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    float PI=3.14,area,circum;
    clrscr();
    printf("\n Enter the Radius of circle: ");
    scanf("%d",&r);
    area=PI*r*r;
    circum=2*PI*r;
    printf("\n Area of Circle: %f",area);
    printf("\n Circumference of a circle: %f",circum);
    getch();
}

/*
OUTPUT:
Enter the Radius of circle: 3
Area of Circle: 28.260000
Circumference of a circle: 18.840000
*/