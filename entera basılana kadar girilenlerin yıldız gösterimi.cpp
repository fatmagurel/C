//ENTER tu�una bas�lana kadar s�rekli olarak klavyeden girilen karakterleri alan ve her bir karakter i�in ekrana �*� basan bir program yaz�n�z. //
//Kullan�c� ENTER tu�una bast��� zaman girilen karakterleri girildi�i s�rada ekrana yazd�r�n�z. ENTER i�in karakter kodu 13�t�r. //
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	char giris[50];
	char *p;
	int i=0,k;
	p=(char*)malloc(sizeof(char));
	p=giris;
	while(1)
	{
		*(p+i)=getch();
		if(*(p+i)==13)
			break;
		putchar('*');
		i++;
	}
	printf("\n");
	for(k=0;k<i;k++)
	{
		printf("\nAdres[%d]=%p\n",k,p+k);
		putchar(*(p+k));
	}
	return 0;
}
