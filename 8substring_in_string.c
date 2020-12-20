#include<stdio.h>
//#include<stdlib.h>
int main()
{
	char str[20],sub[20];//we take both of same size as abab is a substring of abab hence sizes of both string are equal
	int i,j,flag=0;
	printf("ENTER STRING ");
	fgets(str,20,stdin);//input string
	printf("ENTER SUB-STRING ");
	fgets(sub,20,stdin);//input substring
	for(i=0;i<=strlen(str);i++)
	{
		for(j=0;j<=strlen(str);j++)
		{
			if(str[i]==sub[j])//...............how to do this in loop ??????????????????????????????????????????????? 
			{
				if(str[i+1]==sub[j+1])
				{
					if(str[i+2]==sub[j+2])
					{
						if(str[i+3]==sub[j+3])
						{
							flag=1;
							continue;
						}
					}
				}
				
			}
			else
			{
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("String exists");
	}
	else{
		printf("Not exists");
	}
return 0;
}
