#include<stdio.h>
int main()
{
	int m,n,i,p,f=0;
	
	scanf("%d",&n);
m=n;	

while(n !=0)
{
	p=n%10;
	f=f*10 + p;
	n=n/10;
}
if(f == m)
printf("Yes");
else
printf("No");
}
