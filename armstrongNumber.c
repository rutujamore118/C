#include<stdio.h>
#include<math.h>

int main(void)
{
	int num,onum,rem=0,sum=0;

	printf("Enter the number :: ");
	scanf("%d",&num);
	onum =num ;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+(rem*rem*rem);
	}

	if(sum==onum)
	printf("%d is armstrong number",onum);
	else
	printf("%d is not a armstrong number",onum);

	return 0;
}
