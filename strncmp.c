/*#include <stdio.h>
#include<string.h>
int main()
{
    char str1[10]="abcdef";
    char str2[5]="abcd";
    char str3[]="ghi";
    int i,j,k;
    i=strncmp(str1,str2,4);
    printf("\n the comparison of str1 and str2 strings = %d",i);
    j=strncmp(str1,str2,6);
    printf("\n the comparison of str1 and str2 strings= %d",j);
    k=strncmp(str1,str3,3);
    printf("\n the comparison of str1 and str3 strings =%d",k);
}*/
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    int result;
    strcpy(str1,"hello");
    strcpy(str2,"helLo world");
    result=strncmp(str1,str2,4);
    if(result>0){
        printf("ASCII value of first unmatched chracter of str1 is greaterthan str2");
    }
    else if(result<0){
     printf("ASCII value of first unmatched chracter of str1 is less than str2");   
    }
    else{
        printf("both the strings str1 ang str2 are equal");
    }
    return 0;
    }

