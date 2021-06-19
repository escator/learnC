#include <stdio.h>


int main()
{
	//ряд фибоначчи

	int one = 0;
	int two = 1;
	int temp;

	int inter = 20;

	printf("%s\n", "Введите длину числового ряда: ");
	scanf("%d", &inter);
	printf("%s %d\n", "Длина последовательности Фибоначчи состовляет:", inter);
	inter -= 2;


	printf("%d, ", one);
	printf("%d, ", two);

	for(int i = 0; i<inter; i++){
		temp = two;
		two = one + two;
		one = temp;

		(i == inter - 1) ? printf("%d.\n", two) : printf("%d, ", two);
		
	}


}