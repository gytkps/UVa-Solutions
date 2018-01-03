#include <stdio.h>

int main(void) {
	int i, num, call, time, mile, juice;
	
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++) {
		scanf("%d", &call);
		mile = 0;
		juice = 0;
		
		while(call--) {
			scanf("%d", &time);
			mile += (time / 30 + 1) * 10;
			juice += (time / 60 + 1) * 15;
		}
		
		printf("Case %d: ", i);
		if(mile < juice)
			printf("Mile %d\n", mile);
		else if(juice < mile)
			printf("Juice %d\n", juice);
		else
			printf("Mile Juice %d\n", mile);
	}
	return 0;
}