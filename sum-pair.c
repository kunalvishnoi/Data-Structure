#include <stdio.h>

int main(void) {
	
   int i,n,j,temp,l,r,sum;
   int a[100];
   scanf("%d", &n);
 
 
 
   for (i = 0; i < n; i++)
 {     scanf("%d", &a[i]);
 }
 
  for (i = 0; i<n-1;i++)
  {
      for(j=1;j<n;j++)
 {     if(a[i]>a[j])
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
   }
   scanf("%d",&sum);
 l = 0;
    r = n-1; 
    while (l < r)
    {
         if(a[l] + a[r] == sum)
              return 1; 
         else if(a[l] + a[r] < sum)
              l++;
         else
              r--;
    }    
    return 0;
}
