#include <stdio.h>
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
	
	int t,maximum,n,x;
	scanf("%d",&t);
	while(t)
	{
	    t--;
	    int n;
	    scanf("%d",&n);
	    int a[n],i;
	    for(i=0; i<n; i++)
	     {  scanf("%d",&a[i]);
	     }
	    
 maximum=a[0];
	     x=a[0];
	     for(i=1;i<n;i++)
	     {
	         maximum=max(a[i],maximum+a[i]);
	         x=max(maximum,x);
	     }
	     printf("%d\n",x);
	}
	
	return 0;
}