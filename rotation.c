#include <stdio.h>
int main()
{

int n, d, i;

scanf("%d%d",&n,&d);
int a[10000];

for(i=0;i<n;++i) 
	scanf("%d",&a[i]);	
for(i=d;i<n+d;++i) 
	printf("%d ",a[i%n]);	
return 0;
}