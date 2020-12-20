#include<stdio.h>
int main()
{
	char str[100];
	int i,count=0;
	printf("Enter string");
	fgets(str,100,stdin);
	for(i=0;i<100;i++)
	{
		if(str[i]!='\0' && str[i]!='\n')// && str[i]!='\n' this condition to avoid use enter as a char in input
		{
			count+=1;
		}
		else
		{
			break;
		}
	}
	printf("LEN OF STR IS: %d",count);
	return 0;
}
