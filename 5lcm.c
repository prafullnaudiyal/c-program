#include<stdio.h>
int main(){
	int n1,n2,f1=0,f2=0,i;
	printf("Enter 2 no");
	scanf("%d%d",&n1,&n2);
	for(i=2;i<=n1;i++){
		if(n1%i==0){
			f1=i;
			break;
		}
	}
	for(i=2;i<=n2;i++){
		if(n2%i==0){
			f2=i;
			break;
		}
	}
	if(f1==f2){
		printf("The LCM OF %d and %d is = %d",n1,n2,f1);
	}
	else{
		printf("LCM is 1");
	}
	
	return 0;
}
