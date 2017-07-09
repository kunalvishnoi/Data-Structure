#include <stdio.h>

int main(void) {
	
   int i,n,j,temp;
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
for (i = 0; i <n; i++)
      printf("%d\n", a[i]);
 return 0;
}