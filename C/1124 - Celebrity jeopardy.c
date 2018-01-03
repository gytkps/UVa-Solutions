#include <stdio.h>
#include <string.h>

int main(void) {
	int len;
	char str[100];
	
	while(fgets(str, 10, stdin) != NULL) {
		len = strlen(str);
		if(str[len - 1] == '\n')
			str[len - 1] = '\0';

		printf("%s\n", str);
	}

	return 0;
}