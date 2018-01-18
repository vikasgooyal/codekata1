#include<stdio.h>
int main()
{
	int m,n,i,p;
	scanf("%d %d",&n ,&m);
	if(m<0 & n<0)
	printf("0");
	else{
	p=n;
	for(i=1;i<m;i++)
	{
		n=n*p;
	}
	printf("%d",n);
}}
