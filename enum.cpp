#include<stdio.h>
int main()
{
	enum mainColors{
		red,
		blue,
		yellow
	};
	
	enum mainColors pixel;
	pixel=red;
	if(pixel==red)
	printf("Red");
	else if(pixel==blue)
	printf("Blue");
	else
	printf("Yellow");
	
}
