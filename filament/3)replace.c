#include <stdio.h> 
#include <string.h>
 
int main()
{
    char s[10],c1,c2;  
    int  i;
 
    printf("Enter  the string : ");
     gets(s);
    
	printf("Enter a character replace: ");
    c1=getchar();
    getchar();
    printf("\nEnter character to replace  with  %c : ",c1);
    c2=getchar();
    printf("\n before replace:%s",s);
    
    for(i=0;s[i];i++)
	{  
		if(s[i]==c1)
		{
		   s[i]=c2;
	 
	    }
 
	}
	   
    printf("\nafter replace:%s",s);
 	 
     
    return 0;
}