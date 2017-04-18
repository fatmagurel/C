#include<stdio.h>
int main()
{
	int kim,mat,fiz;
	for(int i=0;i<10;i++)
	{
		printf("Kimya notunu giriniz: ");
		scanf("%d",&kim);
		printf("Matematik notunu giriniz: ");
		scanf("%d",&mat);
		printf("Fizik notunu giriniz: ");
		scanf("%d",&fiz);
		if(kim>=70||mat>=60&&fiz>=60)
		printf("Basarili...\n");
		else
		printf("Basarisiz!!!\n");
	}
	return 0;
}
