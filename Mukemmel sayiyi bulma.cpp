#include<stdio.h>
int main()
{
	int x,sayac=1,toplam=0;
	printf("Bir sayi giriniz: ");
	scanf("%d",&x);
	while(x>sayac)
	{
		if(x%sayac==0)
		{
			toplam=toplam+sayac;
			sayac++;
		}
		else 
		sayac++;		
	}
	if(toplam==x)
	printf("Mukemmel sayidir.");
	else
	printf("Mukemmel sayi degildir.");
	return 0;
}
