#include<stdio.h>
int main(){
     int m1,m2,m3,total;
     float per;
     printf("\n entar mark1");
     scanf("%d",&m1);
     printf("\n entar mark2");
     scanf("%d",&m2);
     printf("\n entar mark3");
     scanf("%d",&m3);
     total=m1+m2+m3;
     printf("\n total is %d",total);
     per = (float)total/3;
     printf("\n percentage is %.2f",per);
     // 75 up A
     //60-70 b
     //50-60 c
     //40-50 d                                                                                                                                                        
     if(per>=75){
           printf("\n  fistt nombr");
     }else if(per>50 && per<75){
        printf("\n pass");
     }if(per<40){
 printf("\n faile");
     }
    

          /*int no;
          printf("\n enter no:");
          scanf("%d",&no);
          //check no is +ve, -ve or zero
          if(no>18){
            printf("\n  is election");
          }else if (no<18){
            printf("\n no election ");
          }*/




    return 0;
}