#include<stdio.h>
int main(){

int n,i,s=0, k,a[20];

scanf("%d %d",&n,&k);

if(n<0 || k<0)
printf("Invalid output");
 

for(i=0 ; i<n ;i++)
{
scanf("%d",&a[i]);
}


for(i=0 ; i<k ;i++)
{
	s=a[i]+s;
}

printf("%d",s);
}
