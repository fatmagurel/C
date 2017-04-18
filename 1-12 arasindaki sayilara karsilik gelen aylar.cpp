#include<stdio.h>
int main()
{
	int ay;
	printf("1-12 arasi bir sayi gir: ");
	scanf("%d",&ay);
	switch(ay)
	{
	case 1:
	printf("ocak");
	break;
	case 2:
	printf("subat");
	break;
	case 3:
	printf("mart");
	break;
	case 4:
	printf("nisan");
	break;
	case 5:
	printf("mayis");
	break;
	case 6:
	printf("haziran");
	break;
	case 7:
	printf("temmuz");
	break;
	case 8:
	printf("agustos");
	break;
	case 9:
	printf("eylul");
	break;
	case 10:
	printf("ekim");
	break;
	case 11:
	printf("kasim");
	break;
	case 12:
	printf("aralik");
	default:
	printf("Gecersiz sayi girdiniz!");
	break;
	return 0;
}
}
