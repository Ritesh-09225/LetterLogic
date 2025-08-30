#include <stdio.h>
void main()
{
char vow[12]="aeiouAEIOU";
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
for(int i=0;i<12;i++)
{
if(vow[i]==ch)
{
printf("\n%c is Vowel",ch);
break;
}
else
{
printf("\n%c is Consonant",ch);
break;
}
}
}