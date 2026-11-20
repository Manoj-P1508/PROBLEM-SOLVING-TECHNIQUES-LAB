//demonstrate string functions
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len,value;
    clrscr();
    
    strcpy(str3, str1);
    printf("strcpy(str3, str1) : %s\n", str3 );
    
    strcat(str1, str2);
    printf("strcat(str1, str2): %s\n", str1 );
    len = strlen(str1);
    printf("strlen(str1) : %d\n", len );
    printf("Reversed string: %s\n", strrev(str1));

    value=strcmp(str1,str2);
    if(value==0)
        printf("Strings are same");
    else
        printf("Strings are not same");
    getch();
}

/*
OUTPUT:
strcpy(str3, str1) : Hello
strcat(str1, str2): HelloWorld
strlen(str1) : 10
Reversed string: HelloWorld
Strings are not same
*/