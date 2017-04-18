#include<stdio.h>
int main()
{
	int x,sayac=0,sayac1=0;
	for(int i=0;i<10;i++)
	{
		printf("Notu giriniz: ");
		scanf("%d",&x);
		if(x<60)
		sayac++;
		else
		sayac1++;
	}
	printf("60 dan buyuk olan notlarin sayisi: %d\n",sayac1);
	printf("60 dan kucuk olan notlarin sayisi: %d",sayac);
	return 0;
}
