#include <stdio.h>

int main(void) {
	int num, pass = 0;
	float len, wid, dep, wt;
	
	scanf("%d", &num);
	
	while(num--) {
		scanf("%f %f %f %f", &len, &wid, &dep, &wt);
		
		if(((len <= 56 && wid <= 45 && dep <= 25) || (len + wid + dep <= 125)) && wt <= 7) {
			printf("1\n");
			pass++;
		}
		else
			printf("0\n");
	}
	
	printf("%d\n", pass);
	
	return 0;
}