#include<stdio.h>
int main()
{
	struct dogum{
		int gun;
		int ay;
		int yil;
	};
	
	struct insan{
		char ad[50];
		int boy;
		struct dogum tarihi;
	};
	
	struct insan bilgileri[2]={"Fatima", 160, {25,6,1994},
								"Yusif", 170, {27,5,1995}};
								
	for(int i=0;i<2;i++)
	{
		printf("%d. Kayitin\n",(i+1));
		printf("Adi: %s\n",bilgileri[i].ad);
		printf("Boyu: %d\n",bilgileri[i].boy);
		printf("Dogum tarihi:%d-%d-%d\n",bilgileri[i].tarihi.gun,bilgileri[i].tarihi.ay,bilgileri[i].tarihi.yil);
	}
	return 0;
}
