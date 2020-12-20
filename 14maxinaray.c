#include<stdio.h>
int main()
{
	int n,i,temp=0;
	printf("enter array of size ");
	scanf("%d",&n);
		int a[n];
		
		printf("enter array of element ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]>a[i+1])
	{
		temp=a[i];
	}
	else{
		temp=a[i+1];
	}
}
printf("max is %d",temp);
	return 0;
}
