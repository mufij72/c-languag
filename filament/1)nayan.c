#include<stdio.h>
#include<string.h>
int main(){
    char name[20],name1[20];
    int ans;
    printf("enter name");
    gets( name);
    strcpy(name1,name);
    printf("\n name is :%s",name);
     printf("\n name is :%s",name1);
     strrev(name);
      printf("\n name is :%s",name);
      ans=strcmp(name,name1);
      if (ans==0)
      {
        printf("\n string is plindrom");

      }else{printf("\n string is not plindrom");
      }
      
    

    return 0;
}