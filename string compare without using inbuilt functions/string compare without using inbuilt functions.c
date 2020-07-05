#include <stdio.h>
void  compare(char s1[], char s2[]);
int i;
void main()
{
	char s1[20],s2[20];
	printf("enter s1\n");
	scanf("%s", s1);
	printf("enter s2\n");
	scanf("%s", s2);
	printf("strings are %s n %s\n", s1, s2);
	compare(s1, s2);
}

 void  compare(char s1[], char s2[])
{
    int x;
    for(i=0;s1[i]!='\0';i++)
	{
			if(s1[i]!=s2[i])
			{
				x=0;
			}
				else
			{
				x=1;
			}
	}
			
			if(x==0)
			printf("strings are diff");
	    else
	    printf("strings are same");
}