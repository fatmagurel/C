#include<stdio.h>
void increment(int *);
int main()
{
	int i;
	i=5;
	printf("oncesi %d\n",i);
	increment(&i);
	printf("sonrasi %d\n",i);
	return 0;
}

void increment(int *k)
{
	(*k)++;
}
