//Klavyeden girilen sayýnýn tersini gösterme//
#include<stdio.h>
int main()
{
	int a,b;
	printf("Bir sayi giriniz:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		a=a/10;
		printf("%d",b);
	}
	return 0;
}
