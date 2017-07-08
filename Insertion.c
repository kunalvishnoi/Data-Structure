#include <stdio.h>

int main(void) {
	
   int array[100],i,n, value,pos;
   scanf("%d", &n);
 
 
 
   for (i = 0; i < n; i++)
 {     scanf("%d", &array[i]);
 }
 scanf("%d", &pos);
  for (i = n - 1; i >= pos - 1; i--)
 {     array[i+1] = array[i];
 
   array[pos-1] = value;}
for (i = 0; i <= n; i++)
      printf("%d\n", array[i]);
 return 0;
}