#include <stdio.h>
int main()
{
	int temp;
	int a[10],n,i;
	printf("Enter the  num of elements ");
	scanf("%d",&n);
	printf("\nEnter the elements ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n/2;i++)
	{
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
 
	printf("\nThe elements are:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
return 0;
}

