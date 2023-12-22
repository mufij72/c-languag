//c progaram to count number of digits
//  write c progaram to find sum of fist and last digit of a number
//wrin c progarm to enter a number and print its revrse & check weather num is palindrome or not


#include<stdio.h>
int main(){
 int n,count=0,r,sum=0 ,rev=0,f;
 printf("enter no");
 scanf("%d",&n);
 f=n;
 while (n>0)
 {
    r=n%10;
    rev = (rev*10)+r;
    n=n/10;
    sum=sum+r;
    
    count++;
 }
 printf("\n total no: %d",count);
 printf("\n sum of digit no %d",sum);
 printf("\n reverse no is %d",rev);
 if (f==rev)
 {
   printf("\n it is palindron");
 }else{
   printf("\n it is not palindron;");
 }
 

    return 0;
}