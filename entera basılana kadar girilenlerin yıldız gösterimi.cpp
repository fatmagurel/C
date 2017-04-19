//ENTER tuþuna basýlana kadar sürekli olarak klavyeden girilen karakterleri alan ve her bir karakter için ekrana ‘*’ basan bir program yazýnýz. //
//Kullanýcý ENTER tuþuna bastýðý zaman girilen karakterleri girildiði sýrada ekrana yazdýrýnýz. ENTER için karakter kodu 13’tür. //
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
