#include <stdio.h>

int main(){
	float score,fullscore,sum;
	scanf("%f",&score);
	scanf("%f",&fullscore);
	
	sum = (score/fullscore)*100;
	
	printf("Score is %.0f\n",score);
	printf("FullScore is %.0f\n",fullscore);
	printf("percent is %.2f",sum);
}
