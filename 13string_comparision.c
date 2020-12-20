#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter string 1");
	fgets(str1,100,stdin);
	printf("Enter string 2");
	fgets(str2,100,stdin);
	int i,j,flag=0;
	
		for(i=0;i<100;i++)
		{
			for(j=i;j<100;j++)
			{
				if(str1[i]==str2[j] && str1[i]!='\0') 
				{
					flag=1;
					continue;//this will go to next itration for i/j  <- konsa??
				}
				else
				{
					break;
				}
			}
		}
		if(flag==1)
		{
			printf("STRINGS %s and %s ARE SAME",str1,str2);
		}
		else//flag=0
		{
			printf("STRINGS %s and %s ARE NOT SAME",str1,str2);
		}
		return 0;
	}

