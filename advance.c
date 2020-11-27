#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include<time.h>
#define NAMELEN 11
#define MAX 10
#define MIN 1
char name[NAMELEN],ch;
short int number,wrong;
int table,answer;
int checktable(int table);
 
int checktable(int table);
void cap(char *ptr2name);
int main(void)
{
printf("\t\t\t\t\tWelcome to");
printf("\t\t\t\t\tMath Table");
//delay(2000);
printf("\t\t\t\t\tSubmitted to:");
//delay(2000);
printf("\nMATH Table by DLT\n");
printf("Please enter your name (max. %d): ",NAMELEN-1);
gets(name);
cap(name);
printf("\nDo you want to practise some tables? (Y/N) ",name);
scanf("%c",&ch);
//ch = toupper((int)getch());
 
if (ch == 'N') {
printf("\nOkidoki %s, but you'll have to do extra tomorrow!\n",name);
exit(EXIT_SUCCESS); }
 
else
 
do {
wrong=0;
printf("\nWhich table? ");
scanf("%d",&table);
checktable(table);
number = MIN;
 
// The table payment made here
// Ans controller.
 
do {
printf("%d x %d = ",number,table);
scanf("%d",&answer);
if (answer != (number*table))
{
printf("WRONG! %d x %d = %d!\n",number,table,number*table);
wrong++;
}
 
// assessment.
 
} while (number++ != (MAX));
switch(wrong) {
case 0: printf("\n%s: I'm proud of you! No wrong answer found practising table of %d!",name,table);break;
case 1:
case 2: printf("\n%s: Good work! You gave only %d wrong answers doing table of %d.",name,wrong,table); break;
case 3:
case 4: printf("\n%s: Can't you do a lot better? %d wrong anwers found doing table of %d.",name,wrong,table); break;
default : printf("\n%s: Practise a little more. You gave %d wrong answers doing table %d.",name,wrong,table); }
printf("\nDo you want to practice again? (Y/N) ");
scanf("%c",&ch);
ch = toupper((int)getch());
printf("\n");
}
while (ch=='N');
printf("\nMATH Table Projects.com.\n");
return 0;
}
 
// here it is checked whether the integer.
int checktable(int table)
{
if ((table < 0) || (table == '\n')) {
fprintf(stderr,"\nERROR: Input has to be a valid positive integer.\n");
exit(EXIT_FAILURE); }
return 1;
}
 
// change the first letter of the name in uppercase
 
void cap(char *ptr2name)
{
    if(ptr2name[0])
    *ptr2name = toupper((int)*ptr2name);
}
