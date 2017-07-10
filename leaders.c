#include <stdio.h>

int main() {
	//code
	int t,n,a[100],j,i;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]<=a[j])
	                break;
	             
	        }
	        if(j==n)
	            printf("%d ",a[i]);
	       
	    }
	    printf("\n");
	    
	}
	return 0;
}