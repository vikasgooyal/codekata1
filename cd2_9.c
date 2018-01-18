#include<stdio.h>
int main()
{
	int m,n,i,p,f;
	
	scanf("%d",&n ,&m);
	
	if(n<0)
	printf("No");
	
	else
	{
	
	for(i=1 ; i <= n ; i++)
	p=p*i;
printf("%d",p);
}


}
