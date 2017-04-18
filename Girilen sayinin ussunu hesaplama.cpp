#include<stdio.h>
double usAl(double x, double y)
{
	double sonuc=1;
	for(double i=0;i<y;i++)
	sonuc=sonuc*x;
	return sonuc;
}

int main()
{
	double taban, us;
	printf("Taban ve us degeri gir:");
	scanf("%lf %lf", &taban,&us);
	printf("Sonuc=%lf",usAl(taban,us));
	
}
