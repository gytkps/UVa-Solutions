#include <stdio.h>
#include <string.h>

int main(void) {
	int num = 1;
	char str[15];
	
	while(1) {
		scanf("%s", str);
		if(str[0] == '#')
			break;
		
		printf("Case %d: ", num);
		num++;
		
		if(strcmp("HELLO", str) == 0)
			printf("ENGLISH\n");
		else if(strcmp("HOLA", str) == 0)
			printf("SPANISH\n");
		else if(strcmp("HALLO", str) == 0)
			printf("GERMAN\n");
		else if(strcmp("BONJOUR", str) == 0)
			printf("FRENCH\n");
		else if(strcmp("CIAO", str) == 0)
			printf("ITALIAN\n");
		else if(strcmp("ZDRAVSTVUJTE", str) == 0)
			printf("RUSSIAN\n");
		else
			printf("UNKNOWN\n");
	}
	return 0;
}