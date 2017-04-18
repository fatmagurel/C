#include<stdio.h>
int topla(int a, int b)
{
	return a+b;
}

int cikar(int a, int b)
{
	return a-b;
}

int carp(int a, int b)
{
	return a*b;
}

double bol(int a, int b)
{
	return (double)a/b;
}

int main ()
{
	int s1,s2,islem;
	while(1)
	{
	printf("Iki sayi gir: ");
	scanf("%d %d",&s1, &s2);
	printf("Islem turunu sec 1-4(1:toplama, 2:cikarma, 3:carpma, 4:bolme): ");
	scanf("%d",&islem);
	if(islem==1)
	printf("Sonuc=%d\n", topla(s1,s2));
	else if(islem==2)
	printf("Sonuc=%d\n", cikar(s1,s2));
	else if(islem==3)
	printf("Sonuc=%d\n", carp(s1,s2));
	else
	printf("Sonuc=%lf\n", bol(s1,s2));
	}
	return 0;
}
