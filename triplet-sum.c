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
	    int a[n],i,x,j,k,value=0;
	    scanf("%d",&x);
	    for(i=0; i<n; i++)
	       scanf("%d",&a[i]);
	       for(i=0;i<n-2;i++)
	       {
	           for(j=i+1;j<n-1;j++)
	           {
	               for(k=j+1;k<n;k++)
	               {
	               if(a[i]+a[j]+a[k]==x)
	               value=1;
	               
	              
	             
	           }
	              
	           }
	       }
	      printf("%d\n",value);   
	}    
	return 0;
}