#include<stdio.h>
int main(){
         char ch;
         printf("\n m.monday");
         printf("\n t.tuesdat");
         printf("\n w.wednesday");
         printf("\n T.thursday");
         printf("\n f.friday"); 
         printf("\n s.saturday");
         printf("\n S.sunday");
         printf("\n enter your day:");
         scanf("%c",&ch);

         switch (ch)
         {
         case 'm':
                  printf("\n monday");
            break;
        case 't':
                  printf("\n tuesdat");
            break;
        case 'w':
                  printf("\n wednesday");
            break;        
        case 'T':
                  printf("\n thursday");
            break;
        case 'f':
                  printf("\n friday");
            break;
        case 's':
                  printf("\n saturday");
            break;
        case 'S':
                  printf("\n sunday");
            break;             
         default:
         printf("\n invelid ");
            
         }
    return 0;
}