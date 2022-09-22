#include <stdio.h>
int main()
{
	int a[10],n,i;
	printf("Enter num of elements ");
	scanf("%d",&n);
	printf("\nEnter elements ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe elements:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	
}
