#include<stdio.h>
int main ()
{
    int i,n,a[100],count=0;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
	{
		for(int j=2;j<a[i];j++)
		{
			
			if(a[i]%j==0)
			{
				printf("%d\t",a[i]);
				count++;
				break;
			}
			
		}
    
}
printf("\ntotal composite number are: %d",count);
}
