#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");

	int number, one, two, three;

	printf("������� ���������� �����:\n");
	scanf("%d", &number);
	one = number / 100;
	two = (number / 10) - (one * 10);
	three = number - (two * 10) - (one * 100);
	printf("a)������ ����� �����:%d \n�)��������� ����� �����:%d\n�)����� ���� �����:%d\n", one, three, one + two + three);
	printf("*)���������� ����� ����� ������:%d%d%d", three, two, one);






}