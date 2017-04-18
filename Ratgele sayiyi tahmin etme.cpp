#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int sayi=rand()%101,x;
	do
	{
	printf("Sayi gir:");
	scanf("%d",&x);
	if(x<sayi)
	printf("Daha buyuk bir sayi gir.\n");
	else if(x>sayi)
	printf("Daha kucuk bir sayi gir.\n");
	else
	printf("Mukemmel! Sayiyi buldunuz!\n");
	}
	while(sayi!=x);
	return 0;
}
