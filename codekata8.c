#include<stdio.h>
int main(){

int n,i,s=0;

scanf("%d",&n);

if(n<0)
printf("Invalid output");


for(i=1 ; i<=n ;i++)
{
s=s+i;
}

printf("%d",s);
}
