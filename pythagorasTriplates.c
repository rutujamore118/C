#include<stdio.h>

int main(void)
{
	int a,b,c,no1,no2;
	printf("Enter Lower limit:: ");
	scanf("%d",&no1);

	printf("Enter Upper limit:: ");
	scanf("%d",&no2);

	printf("Pythagoras triplets are :: \n");
	for(a=no1;a<=no2;a++)
	{
		for(b=a+1;b<=no2;b++)
		{
			for(c=b+1;c<=no2;c++)
			{
				if(a*a+b*b==c*c)
				printf(" %d %d %d \n",a,b,c);
			}
		}

	}
	return 0;
}


