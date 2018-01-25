#include<stdio.h>
#include<stdlib.h>
void reverse(char * str)
{	
	char * temp4=str;
	char * temp1=str;
	char * temp2=str;
	char * temp3=str;
	char ch;
	while(* str != '\0')
	{
		temp2=temp1;

		while(*temp2 !=' ' && *temp2 != '\0')
		{
			temp2++;	
		}
		temp3 = temp2;
		temp2--;
		while(temp1 <= temp2)
		{
			ch= *temp2;
			*temp2= *temp1;
			*temp1=ch;
			temp1++;
			temp2--;
		}
		temp1=temp3+1;
		str++;
	}
printf("%s",temp4);
}
int main()
{
	char str[50]="hello word";
reverse(str);
return 0;
}
