#include <stdio.h>
void my_strcpy(char s[],char d[]);
int main()
{
 int n;
 char s[n];
 char d[n];
 printf("enter the string size:");
 scanf("%d",&n);
 printf("enter the string name:");
 scanf("%s %s",s,d);
 my_strcpy(s,d);
}
void my_strcpy(char s[],char d[]){
    int i=0;
    while(s[i]!='\0'){
        d[i]=s[i];
        i++;
    }
    printf("%s",d);
}
