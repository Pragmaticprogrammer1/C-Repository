#include <stdio.h>

int main()
{
	int input;
	scanf("%d",&input);
	printf("This is the decimal \n");
	printf("%d\n",input);
	printf("This is the octal \n");
	printf("%#o\n",input);
	printf("This is the hex \n");
	printf("%#x\n", input);
	return 0;
}