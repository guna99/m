#include<stdio.h>
int main()
{
	char C;
	int lowercase,uppercase,vowel,consonant;
	scanf("%c",&C);
	lowercase=(C=='a'||C=='e'||C=='i'||C=='o'||C=='u');
	uppercase=(C=='A'||C=='E'||C=='I'||C=='O'||C=='U');
	if(lowercase||uppercase)
    {
	printf("vowel");
	}
	else if("lowercase!=uppercase")
	{
	printf("consonant");
	}
	else 
	{ 
		printf("Invalid");
	}
}
