#include <stdio.h>
#include <math.h>
 
int main()
{
   	char name[3];
	double value, result;
	printf("What is your name?\n");
   	scanf("%s",name);
   	printf("Hello! %s\n", name);
	printf("Enter the number you want to find the square root of\n");
	scanf("%lf",&value);
	result = sqrt(value);
	printf("So, %s The square root of %.2lf = %.2lf\n",name,value,result);
   	return 0;
}