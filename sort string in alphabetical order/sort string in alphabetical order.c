#include<stdio.h>
#include<string.h> 
int main()
{
	char s[25],temp;
	int i,j;
	printf("Enter the string \n");
	scanf("%s",s);
	printf("%s\n", s);
	for(i=0;i<strlen(s)-1;i++)
	{
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("String after sorting is \n%s",s);
	return 0;
}