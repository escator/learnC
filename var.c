#include <stdio.h>
//#include "test.c"

#define MYINT 45
#define MYSTR "String"
#define MYFL 3.1459


int main(int argc, char const *argv[])
{
	char a = 'R';
	char b = '\n';
	int i = 56;
	int t = 99;
	float pi = 3.14;
	
	printf("%c %c %c", a, b, a);
	printf("%c%d\n", b, i+t);  //one string comment
	printf("%.2f\n", pi); //формат float '%.<кол.знаков>f'

	

	/* 
	Miltu string comments
	*/


	return 0;
}