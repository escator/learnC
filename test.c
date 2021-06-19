#include <stdio.h>
void swap(int a, int b);
void printAr();

int ar[] = {4, 2, 10, 7, 6, 1, 3, 9, 5, 8};

int main()
{

//Пузырек
	
	int a;
	int b;
	int size = sizeof(ar) / sizeof(int);
	int count = 0;

	int iterCount = 0;
	
while(count < (size-1)){
	a = ar[count];
	b = ar[count + 1];

	printf("MAIN:\n");
	printAr();

	if(a>b){
		ar[count] = b;
		ar[count + 1] = a;	
		count = 0;	
	} else {
		count++;
	}
	iterCount++;
}
	printf("%ds\n", iterCount);
}

void printAr(){

	for (int i = 0; i < sizeof(ar)/4; ++i)
	{
		printf("%d, ", ar[i]);
	}
		printf("\n");
}