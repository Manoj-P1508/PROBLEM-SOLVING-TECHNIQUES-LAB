//read marks scored by n students and find average of marks
//(demonstration of single dimensional array)
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    float marks[30],sum=0,avg;
    clrscr();
    printf("\n Enter the total number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf(" Enter marks of student %d: ",i+1);
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
    }
    avg=sum/n;
    printf(" Average of the entered marks: %.2f",avg);
    getch();
}
/*
OUTPUT:
Enter the total number of students: 5
Enter marks of student 1: 50
Enter marks of student 2: 60
Enter marks of student 3: 70
Enter marks of student 4: 80
Enter marks of student 5: 90
Average of the entered marks: 70.00
*/