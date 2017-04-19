#include<stdio.h>
int bolme_islemi(int ,int, int*);
int main()
{
	int bolunen, bolen;
	int bolum, kalan;
	bolunen=13;
	bolen=4;
	bolum=bolme_islemi(bolunen, bolen, &kalan);
	printf("bolum:%d\nkalan:%d",bolum, kalan);
	return 0;
}
int bolme_islemi(int bolunen, int bolen, int *kalan)
{
	*kalan=bolunen%bolen;
	return bolunen/bolen;
}
