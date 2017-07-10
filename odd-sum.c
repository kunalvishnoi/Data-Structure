#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t)
	{
	    t--;
	    int n;
	    scanf("%d",&n);
	    int a[n],i,x=0;
	    for(i=0; i<n; i++)
	       scanf("%d",&a[i]);
	    for(i=0; i<n; i++)
	    {
	        x = x ^ a[i];
	    }
	    printf("%d\n",x);
	    
	}
	return 0;
}