#include <stdio.h>
#define NUM 5
#include "myfunc.h"
#include <string.h>

int main(void)
{
	char moj[100];
	int kaz;

	printf("���������͂��Ă�������\n");
	scanf_s("%s", moj, 100);

	kaz = func(moj);

	printf("%d\n", kaz);

	return 0;
}