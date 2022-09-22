
#include<stdio.h>
int main()
{
 int Size, i, a[100],c=0;
 
 printf("\nEnter the Size of an Array: ");
 scanf("%d", &Size);
 
 printf("\n Enter the Array Elements: ");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 } 
 for(i = 0; i < Size; i ++)
 {
   if(a[i] < 0)
   {
	   	c++;
   }
 }
 printf("\n toatal number of negative numbers %d",c);
 return 0;
}
