
#include <stdio.h>
int str_len(char str[]);
int main()
{
 char s[10];
 printf("enter any string:\n");
 scanf("%s",s);
 int l;
 l=str_len(s);
 printf("length of the string=%d\n",l);
 return 0;
}
int str_len(char str[]){
    int i=0;
    while(str[i]!='\0')
    i++;
    return i;
}
