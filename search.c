#include <stdio.h>

int main(void) {
	
   int array[100],i,n, value,pos;
   scanf("%d", &n);
 
 
 
   for (i = 0; i < n; i++)
 {     scanf("%d", &array[i]);
 }
 scanf("%d",&value);
 for(i=0;i<n;i++)
 {
     if(array[i]==value)
     pos= i+1;
     else
     pos=-1;
 }
 
 if (pos==-1)
        printf("Element not found");
    else
        printf("Element Found at Position: %d", pos );
	return 0;
}

