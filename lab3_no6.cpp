#include <stdio.h>
int main()
{
int score;
scanf("%d",&score);
if(0<=score){
	if(score<=100){
		if (score>=68){
			if (score >= 85)
				printf("A");
			else if (score >= 75)
				printf("B");
			else if (score >= 68)
				printf("C,You need %d to get B",75-score);}
		else{
			if (score >= 55)
				printf("D");
			else printf("F");} 
}
else printf("error score");}
else printf("error score");


return 0;
}
