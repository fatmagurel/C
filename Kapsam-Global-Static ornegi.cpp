#include<stdio.h>

int x=1;
void useLocal(void)
{
	int x=25;	//Tekrar calistiginda yine 25 den baslar.//
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
}

void useStaticLocal(void)
{
	static int x=50;	//static oldugu icin en son nerede kaldiysa oradan devam eder.//
	printf("%d\n",x);
	x++,
	printf("%d\n",x);
}

void useGlobal(void)
{
	printf("%d\n",x);
	x*=10;		//Global de oldugu icin deger degisir, kaldigi yerden devam eder.//
	printf("%d\n",x);
}

int main()
{
	int x=5;
	printf("%d\n",x);
	{
		int x=7;
		printf("%d\n",x);
	}
	printf("%d\n",x);
	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();
	printf("%d",x);
}
