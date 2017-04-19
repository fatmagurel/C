#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	void *a;
	a=(char*)malloc(6);
	strcpy((char*)a,"12345");
	printf("%s\n",a);
	free(a);
	
	a=(double*)malloc(sizeof(double));
	*(double*)a=3.123;
	printf("%f\n",*(double*)a);
}
