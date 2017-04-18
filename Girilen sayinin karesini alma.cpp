#include<stdio.h>
int kareAl(int a)
{
	return a*a;
}
int main()
{
	int x;
	while(1)
	{
	printf("Sayiyi gir: ");
	scanf("%d",&x);
	printf("Sonuc: %d\n", kareAl(x));	
	}	
}
