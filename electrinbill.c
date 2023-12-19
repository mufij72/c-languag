//electrinciti unit charge and claculate
#include<stdio.h>
int main(){
 float unit,bill,charge;
 //0 to 50= 50*0.50 =25
 // 51 to 150 =100*0.75=75
 //151 to 250=100*1.20=120
 //>250=1.50
 printf("\n enter unit:");
 scanf("%f",&unit);
 if (unit<=50)
 {
    bill=unit*0.50;
 }else if(unit>=50 && unit<=151){ 
     bill=25+(unit-50)*0.75;
 }else if(unit>=151 && unit<=250){
bill=25+75+(unit-150)*1.20;

 }else{
    bill=220+(unit-250)*1.50;
 }
printf("\n final bill = %.2f",bill);

charge=bill*20/100;
printf("\n charge = %.2f",charge);
bill +=charge;
printf("\n final bill = %.2f",bill);
    
 
    return 0;
}
