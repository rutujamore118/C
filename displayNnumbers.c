#include<stdio.h>

int main(void)
{
	int no,counter=0;
	printf("Enter the number:: ");
	scanf("%d",&no);

	while(counter<no)
	{
		++counter;
		printf("%3d",counter);
		if(counter%10==0)
			printf("\n");
	
	}

	return 0;
}
