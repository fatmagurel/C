#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// X degerini biz giricez, N degeri random bir deger olarak gelecek.

int main() {
	int a, n, x, i, sonuc=0; //a = Ba�katsay�lar, n = x'in �st de�eri, x'i biz giriyoruz..
		printf("Lutfen 'x' degerini giriniz:\n");
	scanf("%d", &x);
	srand(time(NULL));  //Program� kapat�p a�t���m�zda s�rekli de�i�mesi i�in srand tan�mlad�k.
	n=rand()%20;  //n degeri 0-20 arasinda random deger..
	a=rand()%20; //an degeri 0-20 arasinda random deger..
	
	while (n<0)
	{	
		n=rand()%20;
	}
		for (i=n; i>=0; i--){
			printf("\n a->%d\tx=> %d\tn=> %d", a,x,i);
			sonuc+=(a*(pow(x,i)));
			int arason=a*(pow(x,i));
			printf("\t Ara Toplamimiz=%d  \n", arason);
			a=rand()%20;
		}
		
	printf("\n Sonuc=%d", sonuc);
	return 0;
}
