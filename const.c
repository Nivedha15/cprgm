#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char var;
printf("enter the character\n");
scanf(%s,&var);
if((var=='a')||(var=='e')||(var=='i')||(var=='o')|(var=='u')||(var=='A')||(var=='E')||(var=='I')||(var=='O')||(var=='U'))
{
printf("the given character %s is vowel\n",var);
}
else
{
printf("the given character %s is consonant\n",var);
}
getch();
}

