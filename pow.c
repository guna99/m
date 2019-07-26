#include<stdio.h>
int main()
{
	int base,exponent;
	long int result=1;
	scanf("%d %d",&base,&exponent);
	while(exponent!=0)
	{
		result*=base;
		--exponent;
	}
	printf("%ld",result);

}
