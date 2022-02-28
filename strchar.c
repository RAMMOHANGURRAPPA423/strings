#include <stdio.h>
int str_char(char s[],char c);
int main()
{
   char str1[50];
   char c;
   int r;
   printf("enter first string:");
   scanf("%s",str1);
   printf("enter a character:");
   scanf("%c",&c);
   r = str_char(str1,c);
   if(r>=0&&r<=50)
   printf("the index of character=%d\n",r);
   else
   printf("enter the character is not found\n");
   return 0;
}
int str_char(char s[],char c){
    int i;
    while(s[i]!=c){
       
        i++;
    }
    return i;
}
