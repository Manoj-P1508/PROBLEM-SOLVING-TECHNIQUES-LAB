//program 7
//Read percentage of marks and display appropriate message
//(Demonstration of else-if ladder)
#include<stdio.h>
#include<conio.h>
void main()
{
    float per;
    clrscr();
    printf("\n Enter the percentage of the student: ");
    scanf("%f",&per);
    if(per>=75)
        printf("Congrats! First class with distinction");
    else if(per>=60)
        printf("Congrats! First class");
    else if(per>=50)
        printf("Congrats! Second class");
    else if(per>=35)
        printf("Congrats! Pass class");
    else
        printf("Sorry, Failed");
    getch();
}
/*
OUTPUT:
Enter the percentage of the student: 80
Congrats! First class with distinction
Enter the percentage of the student: 60
Congrats! First class
Enter the percentage of the student: 50
Congrats! Second class
Enter the percentage of the student: 35
Congrats! Pass class
Enter the percentage of the student: 30
Sorry, Failed
*/