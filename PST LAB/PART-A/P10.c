//remove duplicate element in a single dimensional array
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a[50],i,j,k,n;
    clrscr();
    printf("\n Enter size of the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf(" Enter elements are: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                    a[k]=a[k+1];
                    j--;
                    n--;
            }
    printf("\n Array after deleting the duplicate elements is: ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    getch();
}
/*
OUTPUT:
Enter size of the array: 5
Enter the elements of the array: 10 20 10 20 30
Enter elements are: 10 20 10 20 30 
Array after deleting the duplicate elements is: 10 20 30
*/