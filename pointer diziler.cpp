#include<stdio.h>
int main()
{
	int elm;
	int month[]= {1,2,3,4,5,6,7,8,9,10,11,12};
	int *ptr;
	ptr=month;
	printf("%p\n",ptr);
	elm=ptr[3];
	printf("%d\n",elm);
	ptr=&month[3];
	printf("%p\n",ptr);
	elm=(ptr+2)[2];
	printf("%d\n",elm);
	elm=*(month+3);
	printf("%d\n",elm);
	ptr=month;
	printf("%p\n",ptr);
	elm=*(ptr+2);
	printf("%d\n",elm);
	elm=*(month+1);
	printf("%d\n",elm);
	return 0;
}
