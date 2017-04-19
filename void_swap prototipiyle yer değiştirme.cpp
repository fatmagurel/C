//void swap (int *, int *) prototipini kullanarak iki deðiþkenin deðerini yer deðiþtiren bir fonksiyon yazýnýz.
#include<stdio.h>

void swap(int *, int *);

int main()
{
	int a=5, b=6, x=10, y=8;
	printf("a=%d, b=%d, x=%d, y=%d\n",a,b,x,y);
	swap(&a,&b);
	swap(&x,&y);
	printf("a=%d, b=%d, x=%d, y=%d\n",a,b,x,y);
}

void swap(int *q, int *p)
{
	int temp=*q;
	*q=*p;
	*p=temp;
}
