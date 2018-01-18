#include<stdio.h>
int main()
{
	int m,n,i,p,f;
	
	scanf("%d",&n);
	
	if(n<0)
	printf("Invalid output");
	
	for(i=2; i <n - 1 ; i++)
	{
	
	if(n%i == 0)
	{
				f=0;
				break;
		
}
		}
		
		if(f==0)
			printf("No");	
		else
		
	printf("Yes");
}

   
