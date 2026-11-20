#include<stdio.h>
#include<conio.h>
struct student
{
    char name[30];
    int roll;
    float per;
};
void main()
{
    struct student s[20];
    int i,n;
    clrscr();
    printf("\n Enter No of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter name,roll and percentage of students %d: ",i+1);
        scanf("%s%d%f",&s[i].name,&s[i].roll,&s[i].per);
    }
    printf("\nStudetns Details: \n");
    printf("*****************************");
    printf("\nName \t Roll \t Percentage\n");
    for(i=0;i<n;i++)
        printf("%s \t %d \t %f \n",s[i].name,s[i].roll,s[i].per);
    getch();
}
/*
OUTPUT:
Enter No of students: 3
Enter name,roll and percentage of students 1: virat 101 100
Enter name,roll and percentage of students 2: rohit 102 99
Enter name,roll and percentage of students 3: dhoni 103 98
Studetns Details: 
******************************
Name    Roll    Percentage
virat   101     100.000000
rohit   102     99.000000
dhoni   103     98.000000
*/