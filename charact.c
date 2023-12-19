#include<stdio.h>
int main(){

          char ch;
          printf("entre the charact");
          scanf("\n %c",&ch);
          if(( ch>='a' && ch<='z' || ch>='A' && ch<='Z'  )){
                          printf("it is alphabet");
          }else if (ch>='0'&& ch<='9')
          {
            printf("\n it is dijit");
          }else{

            printf("\nit is specical char ");
          }
          

return 0;

}