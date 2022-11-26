//자신의 나이를 햇수와 개월수로 표기하라

#include <stdio.h>
int main(void)
{
	int age;
	int month;
		age = 24;
		month = age * 12;

	printf("%d년\n=%d개월", age, month);

	return 0;
}