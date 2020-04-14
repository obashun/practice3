#include <string.h>

int func(char *str) {
	int ans=0;
	int i;
	for (i = 0; *(str+i)!= '\0'; i++) {
		if ('a' == *(str+i))
			ans++;
	}

	return ans;

}