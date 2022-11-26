// 이름 출력 테스트

#include <stdio.h>
int main(void)
{
	char l[4] = "Kim";
	char f[6] = "Minji";

	printf("%s %s\n", l, f);
	printf("%s\n%s\n", l, f);
	printf("%s ", l);
	printf("%s", f);

	return 0;
}