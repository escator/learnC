#include <stdio.h>


int main()
{

//Пузырек
//	int ar[] = {4, 2, 10, 7, 6, 1, 3, 9, 5, 8};

int countI = 10;
int countJ = 10;

for (int i = 1; i < countI; ++i)
{
	for (int j = 1; j < countJ; ++j)
	{
		printf("%2d ", i*j);
	}
	printf("\n");
	/* code */
}


}