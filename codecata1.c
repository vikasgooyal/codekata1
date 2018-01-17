#include<stdio.h>
int main(){
	
	int a;
	
	scanf("%d",&a);
	
	if(a>0 && a<100000)
	printf("Positive");
	else if (a<0 && a> -100000)
	printf("Negative");
	
	else
	printf("Zero");

	return 0;
}
