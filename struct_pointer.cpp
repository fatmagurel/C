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
	
	struct insan *ptr;
	struct insan bilgileri[2]={"Fatima", 160, {25,6,1994},
								"Yusif", 170, {27,5,1995}};
	
	ptr=bilgileri;							
	for(int i=0; ptr<&bilgileri[2];i++, ptr++)
	{
		printf("%d. Kayitin\n",(i+1));
		printf("Adi: %s\n",ptr->ad);
		printf("Boyu: %d\n",ptr->boy);
		printf("Dogum tarihi:%d-%d-%d\n",ptr->tarihi.gun,ptr->tarihi.ay,ptr->tarihi.yil);
	}
	return 0;
}
