#include<stdio.h>
int main()
{
	int i,j;
	char *ilkBaharAylar[3]={"Mart","Nisan","Mayis"};
	char *yazAylari[3]={"Haziran","Temmuz","Agustos"};
	char *sonBahar[3]={"Eylul","Ekim","Kasim"};
	char *kisAylari[3]={"Aralik","Ocak","Subat"};
	char **table[4];
	table[0]=ilkBaharAylar;
	table[1]=yazAylari;
	table[2]=sonBahar;
	table[3]=kisAylari;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%s\n",table[i][j]);
		}
	}
	return 0;
}
