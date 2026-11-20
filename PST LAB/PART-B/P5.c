//read, display and add 2 m*n matrices using function
#include <stdio.h>
#include<conio.h>
void add(int r, int c, int a[r][c], int b[r][c])
{
    int i, j, sum[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("\nSum of the given matrices: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
    printf("\n");
    }
}
void display(int r, int c, int a[r][c], int b[r][c])
{
    int i, j;
    printf("\nStored matrices are: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", b[i][j]);
        }
    printf("\n");
    }
}
void read(int r, int c, int a[r][c], int b[r][c])
{
    int i, j;
    printf("\nEnter elements of First matrix: ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    
            printf("\nEnter elements of second matrix: ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
}
int main()
{
    int r, c, a[100][100], b[100][100];
    clrscr();
    printf("\nEnter row and column size: ");
    scanf("%d %d", &r, &c);
    read(r, c, a, b);
    display(r, c, a, b);
    add(r, c, a, b);
return 0;
}
/*
OUTPUT:
Enter row and column size: 3 3
Enter elements of First matrix: 1 2 3 4 5 6 7 8 9
Enter elements of second matrix: 9 8 7 6 5 4 3 2 1
Stored matrices are: 
1 2 3 
4 5 6 
7 8 9 
9 8 7 
6 5 4 
3 2 1 
Sum of the given matrices: 
10 10 10 
10 10 10 
10 10 10 
*/