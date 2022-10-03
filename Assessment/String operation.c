#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void reverse(char str[]);
void concat(char str1[], char str2[]);
int palindrome(char str[]);
void copy(char str1[], char str2[]);
int length(char str[]);
void printFrequency(int freq[]);
void count_vowels_and_consonant(char* str);

void main()
	char a[100],b[100];
	int result,option;
do{
	printf("\n1.Reverse String");
	printf("\n2.String Concatenation");
	printf("\n3.Check For Palindrome");
	printf("\n4.Copy");
	printf("\n5.Length Of String");
	printf("\n6.Enter Your Choice");'
	printf("\n7.Quit");
	scanf("%d",&option);

	flushall();
	switch(option){
	case 1:
	     printf("\nEnter a String:");
           gets(a);
           reverse(a);
           printf("\nResult=%s", a);
           printf("\nPress a Character");
           getch();
           break;
	case 2:
	     printf("\nEnter 1st string:");
           gets(a);
           printf("\nEnter 2nd string:");
           gets(b);
           concat(a, b);
           printf("\nresult=%s", a);
           printf("\nPress a Character");
           getch();
           break;
	case 3:
	     printf("\n Enter a String:");
           gets(a);
           result = palindrome(a);
           if (result == 0)
           printf("\nNot a palindrome");
           else
           printf("\nA palindrome");
           printf("\nPress a Character");
           getch();
           break;
	case 4:
	     printf("\nEnter a String:");
           gets(a);
           copy(b, a);
           printf("\nResult=%s", b);
           printf("\nPress a Character");
           getch();
           break;
	case 5:
	     printf("\nEnter a String:");
           gets(a);
           result = length(a);
           printf("\nLength of %s=%d", a, result);
           printf("\nPress a Character");
           getch();
           break;
    	 
           default:
                 printf("\nInvalid Choice:");
                 break;
	      }
 
   } while (option != 7);
}
void reverse(char str[]) {
   int i, j;
   char temp;
   i = j = 0;
   while (str[j] != '\0')
      j++;
}
void concat(char str1[], char str2[]) {
   int i, j;
   i = 0;
   while (str1[i] != '\0')
      i++;
   for (j = 0; str2[j] != '\0'; i++, j++)
      str1[i] = str2[j];
   str1[i] = '\0';
}
int palindrome(char str[]) {
   int i, j;
   i = j = 0;
   while (str[j] != '\0')
      j++;
   while (i < j) {
      if (str[i] != str[j - 1])
         return (0);
      i++;
      j--;
   }
   return (1);
}
void copy(char str2[], char str1[]) {
   int i = 0;
   while (str1[i] != '\0') {
      str2[i] = str1[i];
      i++;
   }
   str2[i] = '\0';
}
int length(char str[]) {
   int i = 0;
   while (str[i] != '\0')
      i++;
   return (i);
}
