#include<stdio.h>
char notDonustur(int);

int main()
{
	int y;
	while(1)
	{
	printf("Not gir:");
	scanf("%d",&y);
	printf("Notunuz:%c\n", notDonustur(y));
	}
}

char notDonustur(int x)
{
	if(x<60)
	return 'F';
	else if(x<70)
	return 'D';
	else if(x<80)
	return 'C';
	else if(x<86)
	return 'B';
	else
	return 'A';
}
