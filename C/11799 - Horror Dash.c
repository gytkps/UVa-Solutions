#include <stdio.h>

int main(void) {
	int i, num, stud, speed, max;
	
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++) {
		scanf("%d", &stud);
		max = 0;
		
		while(stud--) {
			scanf("%d", &speed);
			if(speed > max)
				max = speed;
		}
		printf("Case %d: %d\n", i, max);
	}
	return 0;
}