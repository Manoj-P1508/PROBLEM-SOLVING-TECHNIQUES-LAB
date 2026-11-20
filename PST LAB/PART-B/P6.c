//read a string and to find the number of alphabets,
//digits, vowels, consonents and special characters.
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch[100];
    int i,alphabet=0,digit=0,vowel=0,consonant=0,space=0,special=0;
    clrscr();
    printf("\n Enter a string: ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
        {
            alphabet++;
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
                vowel++;
            else
                consonant++;
        }
        else if(ch[i]>='0'&&ch[i]<='9')
            digit++;
        else if(ch[i]==' ')
            space++;
        else
            special++;
    }
    printf("\n No of alphabets: %d",alphabet);
    printf("\n No of digit: %d",digit);
    printf("\n No of vowels: %d",vowel);
    printf("\n No of consonant: %d",consonant);
    printf("\n No of spaces: %d",space);
    printf("\n No of special: %d",special);
    getch();
}
/*
OUTPUT:
Enter a string: #123mewavanguardcollege 
No of alphabets: 19
No of digit: 3
No of vowels: 8
No of consonant: 11
No of spaces: 0
No of special: 1
*/