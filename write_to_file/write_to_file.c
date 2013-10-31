#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c[1000];
	char file_name[100];
	FILE *fptr;
	fptr = fopen("file.txt","w");
	if (fptr==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter what you want write to the file\n");
	scanf("%s",c);
	fprintf(fptr,"%s",c);
	fclose(fptr);
	return 0;
}



