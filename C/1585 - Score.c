#include <stdio.h>
#include <string.h>

int main(void) {
	int i, num, score, chain;
	char str[80];
	
	scanf("%d", &num);
	
	while(num--) {
		score = 0;
		chain = 1;
		scanf("%s", str);
		
		for(i = 0; i < strlen(str); i++) {
			if(str[i] == 'O') {
				score += chain;
				chain++;
			}
			if(str[i] == 'X')
				chain = 1;
		}
		printf("%d\n", score);
	}
	return 0;
}