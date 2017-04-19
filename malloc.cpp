#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *ptr, sum=0;
	printf("Eleman sayisini girin:\n");
	scanf("%d",&n);
	
	ptr=(int *)malloc(n*sizeof(int));
	printf("Dizi elemanlarini girin:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum +=*(ptr+i);
	}
	printf("Toplam=%d",sum);
	return 0;
}
