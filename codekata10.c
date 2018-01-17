#include<stdio.h>
int main(){

int n,i,s=0, k,a[20];

scanf("%d",&n);

for(i=0 ; i<10 ;i++)
{
	k= n/10;
	n=k;
	s++;
	if(k==0)
	break;
	
}

printf("%d",s);
}
