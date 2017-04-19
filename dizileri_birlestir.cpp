#include<stdio.h>
#include<stdlib.h>

int *dizileri_birlestir(int[], int, int[], int);
int main()
{
	int i;
	int liste_1[5]={5,3,7,1,9};
	int liste_2[7]={8,1,6,3,2,4,9};
	int *ptr;
	ptr=dizileri_birlestir(liste_1, 5, liste_2, 7);
	for(i=0;i<12;i++)
		printf("%d", ptr[i]);
	printf("\n");
	return 0;
}

int  *dizileri_birlestir(int dizi_1[], int boyut_1, int dizi_2[], int boyut_2)
{
	int *sonuc=(int*)calloc(boyut_1+boyut_2, sizeof(int));
	int i, k;
	for(i=0;i<boyut_1;i++)
		sonuc[i]=dizi_1[i];
	for(k=0; k<boyut_2; i++, k++)
	{
		sonuc[i]=dizi_2[k];
	}
	return sonuc;
}
