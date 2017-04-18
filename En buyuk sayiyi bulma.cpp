#include<stdio.h>
int maksimum(int a, int b, int c)
{
	int max;
	max=a;
	if(b>a)
	{
		max=b;
	}
	if(c>b&&c>a)
	{
		max=c;	
	}
	return max;

}
int main()
{
	int s1,s2,s3;
	while(1)
	{
		printf("Uc sayi gir:");
		scanf("%d %d %d",&s1,&s2,&s3);
		printf("En buyuk sayi: %d\n",maksimum(s1,s2,s3));
	}
	return 0;
}
