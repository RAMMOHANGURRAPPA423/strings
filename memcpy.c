#include <stdio.h>
#include<string.h>
int main()
{
   char str1[]="hello";
   char str2[]="world";
   printf("str1 before memcpy\n");
   puts(str1);
   memcpy(str1,str2,sizeof(str2));
   puts("\nstr1 after memcpy");
   puts(str1);
   return 0;
}*/
#include <stdio.h>
#include<string.h>
int main()
{
    const char src[20]="my india";
    char dest[50];
    strcpy(dest,"heloo");
    printf("before memcpy dest=%s\n",dest);
    memcpy(dest,src,strlen(src)+1);
    printf("after memcpy dest =%s\n",dest);
    return 0;
}
