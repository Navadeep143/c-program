#include<stdio.h>
int main()
{

float age, k=0;
printf("Enter Age of Person :");
 scanf("%f",&age);

 int a=(int)age;	
 
    if (age>=0 && age-a==0)
    {
	 
    if(age>17)
 
    printf("\nPerson is Eligible for Voting");

	else
     
    printf("\nPerson is NOT Eligible for Voting");
    printf("\nThe person needs %d more years: ",17-a);
	}
	
	else
	
	{
	printf("invalid");
	}
     return 0;
}

