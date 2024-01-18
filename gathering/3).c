#include<stdio.h>
int name1( char name[10]);
void main(){
    int a[10],n;
    printf("enter the name ");
    scanf("%s",n);
    printf("name count %d",name1(a[10]);)
}
int name1(char name[10]){
    int count =0,i;
    for ( i = 0; name[i]!='\0'; i++)
    {
       count++;
    }
    return count;
}