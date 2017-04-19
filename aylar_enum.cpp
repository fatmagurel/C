#include<stdio.h>
enum months_list{
	ocak=1,subat,mart,nisan,mayis,haziran,temmuz,agustos,eylul,ekim,kasim,aralik
};

typedef enum months_list months;
void writeMonthsName(months);

int main()
{
	months thisMonth=haziran;
	printf("Bu ay: %d -> ", thisMonth);
	writeMonthsName(thisMonth);
	return 0;
}

void writeMonthsName(months ayadi)
{
	switch(ayadi)
	{
		case ocak:
			printf("Ocak\n");
			break;
		case subat:
			printf("Subat\n");
			break;
		case mart:
			printf("Mart\n");
			break;
		case nisan:
			printf("Nisan\n");
			break;
		case mayis:
			printf("Mayis\n");
			break;
		case haziran:
			printf("Haziran\n");
			break;
		case temmuz:
			printf("Temmuz\n");
			break;
		case agustos:
			printf("Agustos\n");
			break;
		case eylul:
			printf("Eylul\n");
			break;
		case ekim:
			printf("Ekim\n");
			break;
		case kasim:
			printf("Kasim\n");
			break;
		case aralik:
			printf("Aralik\n");
			break;
	}
}
