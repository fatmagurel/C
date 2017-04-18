#include<stdio.h>
int main()
{
	int x,toplam=0;
	float ortalama;
	for(int i=0;i<10;i++)
	{
		printf("Not gir: ");
		scanf("%d", &x);
		toplam+=x;
	}
	ortalama=(float)toplam/10;
	printf("ortalama= %.2f",ortalama);
	return 0;
}
