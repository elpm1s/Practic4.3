#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");

	int number, one, two, three;

	printf("Введите трёхзначное число:\n");
	scanf("%d", &number);
	one = number / 100;
	two = (number / 10) - (one * 10);
	three = number - (two * 10) - (one * 100);
	printf("a)Первая цифра числа:%d \nб)Последняя цифра числа:%d\nв)Сумма цифр числа:%d\n", one, three, one + two + three);
	printf("*)Написанное число задом наперёд:%d%d%d", three, two, one);






}