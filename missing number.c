#include <stdio.h>

int main() {
    int t,total;
	scanf("%d",&t);
	while(t)
	{
	    t--;
	    int n;
	    scanf("%d",&n);
	    int c[n-1],i;
	    for(i=0; i<n-1; i++)
	     {  scanf("%d",&c[i]);
	     }
	 total  = (n*(n+1))/2;
	for ( i = 0; i< n-1; i++)
      { total -= c[i];
      }
      
	 printf("%d\n",total);
	
	}
	return 0;
}