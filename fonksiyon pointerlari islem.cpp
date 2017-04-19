#include<stdio.h>

int kare(int);
int kup(int);

int main()
{
	int (*islem)(int);
	int sayi;
	char c;
	
	printf("Bir islem secin...\n1-Kare alani\n2-Kup alani\n");
	c=getchar();
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(c=='1')
		islem=kare;
	else
		islem=kup;
	
	printf("Islem sonucu:%d\n",islem(sayi));
	while(getchar()!='\n'){		}
	getchar();
}

int kare(int s)
{
	return s*s;
}

int kup(int s)
{
	return s*s*s;
}
