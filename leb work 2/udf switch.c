#include<stdio.h>
float add (float a,float b){
    return a+b;
}
float subtcr (float a,float b){
    return a-b;
}
float muil (float a,float b){
    return a*b;
}
float divide (float a,float b){
    return a/b;
}
int main(){
    float num1,num2,result;
    char ch;
    while (1)
    {
        printf("\n enter the num1 and num 2");
        scanf("%f %f",&num1,&num2);
        printf("\n enter the opretur(+ - * /)");
        scanf("%c",&ch);
    
    switch (ch)
    {
    case '+':
    result= add(num1,num2);
        break;
        case '-':
    result= subtcr(num1,num2);
        break;
        case '*':
    result= muil(num1,num2);
        break;
        case '/':
    result= divide(num1,num2);
        break;
    
    default:
    printf("invalid opt..\n");
       continue;

    }
    printf("\n result %.2f",result);

    }
    return 0;
}
