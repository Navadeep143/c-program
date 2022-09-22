#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,c;
    float a[]={1.6, 1.8, -2.7, -1.6, 2.3, 2.1, 0.19};

    
    printf("\n List of Negative Numbers in this Array  :  "); 
 for(i = 0; i < 20; i ++)
 {
   if(a[i] < 0)
   {
	   	printf("%0.01f ",a[i]);
	   	c++;
   }
 }
 printf("\ncount %d",c);
 return 0;
}

