#include<stdio.h>
#include<math.h>
int main()
{
	double y,y_sqrt;
	while(1)
	{
		printf("Bir sayi gir: ");
		scanf("%lf",&y);
		y_sqrt=sqrt(y);
		printf("%lf\n",sqrt(y));	
	}
	return 0;
}
