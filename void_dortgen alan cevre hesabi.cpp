//void rectangle(int a,int b, int *area, int *perimeter) prototipini kullanarak bir dikd�rtgenin �evresi ve alan�n� hesaplayan bir fonksiyon yaz�n�z.
#include<stdio.h>

void rectangle(int a, int b, int *area, int *perimeter);

int main()
{
	int x,y,alan,cevre;
	printf("Aralarina bosluk birakarak alani ve cevresi hesaplanacak iki deger girin:\n");
	scanf("%d %d",&x,&y);
	rectangle(x, y, &alan, &cevre);
	printf("Alani=%d\nCevresi=%d\n", alan, cevre);
}

void rectangle(int a, int b, int *area, int *perimeter)
{
	*area=a*b;
	*perimeter=2*(a+b);
}
