#include<stdio.h>
#include<string.h>
int main(){
    char str[20] ,str2[20];
     printf(" enter the namae ");
     gets(str);
     printf("\n name is");
     puts(str);
     printf("\n leng of string %d",strlen(str));
     
     printf("\n strupr of string %s",strupr(str));
     printf("\n strlwr of string %s",strlwr(str));
     printf("\n revers of string %s",strrev(str));
     printf("\n str cmp of string %c",strcmp(str2,str));
     

    return 0;
}