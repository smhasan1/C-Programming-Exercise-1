#include<stdio.h>

int main(){

	char tname[30][10];
	int records, won[10], tied[10], lost[10], streak[10], points[10], maxp = 0, maxs = 0, games;

	scanf("%d", &records);
//printf("%d\n", records);

	for(i = 0; i < records; i++){

		scanf("%s %d %d %d %d", tname[i], &won[i], &tied[i], &lost[i], &streak[i]);
//printf("%s\n", tname[i], won[i], tied[i], lost[i], streak[i]);

		points[i] = (won[i]*3) + (tied[i]*1);

		games = won[i] + tied [i] + lost[i];

		if(won[i] < 0 || tied[i] < 0 || lost[i] < 0){
		printf("%s\tnegative number of games\n", tname[i]);
		continue;
		}else if(games > 99){		
		printf("%s\tgames played are more than 99\n", tname[i]);
		continue;
		}else{
		printf("%s\t %3d\t %+3d\n", tname[i], points[i], streak[i]);
		}		

		if(i == 0){
		maxp = points[i];
		}

		if(i == 0){
		maxs = streak[i];
		}

		if(maxp < points[i]){
		maxp = points[i];
		}

//printf("qqq%d\n", maxp);

		if(maxs < streak[i]){
		maxs = streak[i];
		}
	

//printf("qqq%d\n", maxs);

	
	}

	printf("\nThe maximum points by any team is%5d\n", maxp);
	
	if(maxs > 0){
	goto L1;
	}else{
	maxs = 0;
	}
	
L1:	printf("The longest winning streak is%5d\n", maxs);



}
