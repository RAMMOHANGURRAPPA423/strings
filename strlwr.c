
#include <stdio.h>
void str_lwr(char a[]);
int main()
{
char str[40];
int i;
printf("enter the string:");
scanf("%s",str);
str_lwr(str);
return 0;
}
void str_lwr(char a[]){
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>'A'&& a[i]<='Z'){
            a[i]=a[i]+32;
        }
    }
    printf("string in lowercase=%s\n",a);
}
