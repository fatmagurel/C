#include<stdio.h>
long fibonacci(long n);
int main()
{
	long sayi,sonuc;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	sonuc=fibonacci(sayi);
	printf("Fibonacci(%d)=%d\n",sayi,sonuc);
	return 0;
}

long fibonacci(long n){
	if(n==0||n==1)
	return n;
	else
	return (fibonacci(n-1)+fibonacci(n-2));
}
