Aim:Write C program to remove all repeated characters in a string.

Program:
#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[2000],temp=1,c='*';  
    int  i,j,k=0,n;
 
    printf("Enter  the string : ");
    gets(s); 
    for(i=0;s[i];i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
		    }	
		}
    }
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
 
     	
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }	
    }
    printf(" removing all duplicates= ");
 	 printf("%s",s);
}


