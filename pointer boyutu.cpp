#include<stdio.h>
int main()
{
	double i;
	double *iptr;
	iptr=&i;
	printf("i nin boyutu:%d\n",sizeof(i));
	printf("iptr nin boyutu:%d\n",sizeof(iptr));
	return 0;
}
