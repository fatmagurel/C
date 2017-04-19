// int uzunluk(char *) prototipini kullanarak strlen fonksiyonuna benzer bir fonksiyon yazýnýz.
#include<stdio.h>

int uzunluk(char *);

int main()
{
	char str[100];
	printf("Metin girin...\n");
	gets(str);
	printf("Uzunlugu %d\n",uzunluk(str));
}

int uzunluk(char *p)
{
	int n=0;
	while(*p!='\0')
	{
		n++;
		p++;
	}
	return n;
}
