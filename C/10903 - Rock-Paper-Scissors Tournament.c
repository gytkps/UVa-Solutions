#include <stdio.h>
#include <string.h>

int main(void) {
	int i, player, game, round, id1, id2, line = 0;
	char move1[9], move2[9];
	
	while(1) {
		scanf("%d", &player);
		if(player == 0)
			break;
		
		int win[100] = {0}, total[100] = {0};
		scanf("%d", &game);
		round = game * player * (player-1) / 2;

		while(round--) {
			scanf("%d %s %d %s", &id1, move1, &id2, move2);
			
			if(move1[0] != move2[0]) {
				total[id1 - 1]++, total[id2 - 1]++;
				
				if(move1[0] == 'r') {
					if(move2[0] == 's')
						win[id1 - 1]++;
					if(move2[0] == 'p')
						win[id2 - 1]++;
				}
				if(move1[0] == 's') {
					if(move2[0] == 'p')
						win[id1 - 1]++;
					if(move2[0] == 'r')
						win[id2 - 1]++;
				}
				if(move1[0] == 'p') {
					if(move2[0] == 'r')
						win[id1 - 1]++;
					if(move2[0] == 's')
						win[id2 - 1]++;
				}
			}
		}
		
		if(line > 0)
			printf("\n");
		for(i = 0; i < player; i++) {
			if(total[i] == 0)
				printf("-\n");
			else
				printf("%.3f\n", win[i] / (float)total[i]);
		}
		line++;
	}
	return 0;
}