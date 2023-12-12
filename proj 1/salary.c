#include<stdio.h>
int main(){
     int salary;
     float hra, da,ta,gross_salary;
     printf("\n entar salary");
     scanf("%d",&salary);

     hra=(float)salary*10/100;
     da=(float)salary*5/100;
     ta=(float)salary*8/100;


   printf("\n hra %1.f",hra);
   printf("\n da %1.f",da);
   printf("\n ta %1.f",ta);

   gross_salary=salary+hra+da+ta;
   printf("\n total %f",gross_salary);
return 0;
}