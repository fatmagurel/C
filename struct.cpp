#include<stdio.h>
int main()
{
	struct{
		int gun;
		int ay;
		int yil;
	}sen{25,6,1994}, kiz_kardes, erkek_kardes;
	
	//printf("GG-AA-YY formatinda dogum gununuzu giriniz:\n");
	//scanf("%d-%d-%d", &sen.gun, &sen.ay, &sen.yil);
	
	printf("GG-AA-YY formatinda kiz kardesinizin dogum gununu giriniz:\n");
	scanf("%d-%d-%d", &kiz_kardes.gun, &kiz_kardes.ay, &kiz_kardes.yil);
	
	printf("GG-AA-YY formatinda erkek kardesinizin dogum gununu giriniz:\n");
	scanf("%d-%d-%d", &erkek_kardes.gun, &erkek_kardes.ay, &erkek_kardes.yil);
	
	printf("Dogum gununuz: %d-%d-%d\n", sen.gun, sen.ay, sen.yil);
	printf("Kiz kardesinizin dogum gunu: %d-%d-%d\n", kiz_kardes.gun, kiz_kardes.ay, kiz_kardes.yil);
	printf("Dogum gunu: %d-%d-%d\n", erkek_kardes.gun, erkek_kardes.ay, erkek_kardes.yil);
	
	return 0;
}
