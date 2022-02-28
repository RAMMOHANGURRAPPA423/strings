#include <stdio.h>
void reverse(char *a);
int main(){
    char a[100];
    scanf("%[^\n]s",a);//to scan the string with spacea
    reverse(a);//recursive funcation call
    return 0;
}
 void reverse(char *a){
     if(*a)//to traverse till the last char of the string input
     {
         reverse(a+1);//to move to the next character
         printf("%c",*a);//to print from the last
     }
 }  
