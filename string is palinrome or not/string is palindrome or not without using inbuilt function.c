#include<stdio.h>
#include<string.h>
void main()
{
	 char s[25], rs[25] = {'\0'};
	 int i,len=0,flag=0
	 printf("Enter a string \n");      
	 scanf("%s",s);
	 printf("%s\n",s);
	 for(i=0;s[i]!='\0';i++)
	 {
	 	 len++; 
	 } 
	 printf("The length of the string '%s' = %d\n",s,len); 
	 for(i=len-1;i>=0;i--)
	 { 
	    rs[len-i-1]=s[i];
	 } 
	 for (flag=1,i=0;i<len;i++)
	 { 
	 	if (rs[i]!=s[i])
	 	flag=0; 
	 }
	 if(flag==1) 
	 printf("%s is a palindrome \n",s);
	 else
	 printf("%s is not a palindrome \n",s);
}
