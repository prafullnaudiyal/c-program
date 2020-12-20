//FIBONACCI SERIES:-

#include<stdio.h>
int main(){
	int a=0,b=1,i=0,temp=0,n;//n for nth term 
	printf("enter the nth term for your series n is used a limit take is small");
	scanf("%d",&n);
	printf(" 0 1 ");//we have to print 0 and 1 first as after it we just print their sum
	for(i=0;i<n;i++){
		temp=a+b;
		a=b;
		b=temp;//main logic
		printf(" %d ",temp);
	}
	return 0;
}
//n should be less 
