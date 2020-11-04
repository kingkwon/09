#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Practice 03
int main(void) {
	
	int i;
	int grade[SIZE];
	int score[SIZE];
	int flag_same = 1;
	
	for(i=0; i<SIZE; i++)
	{
		grade[i] = rand() % 100;
		score[i] = grade[i];
		printf("score[%d] = %d\n", i, score[i]);
	}	
	for(i=0; i<SIZE; i++)
	{
		if(grade[i] != score[i])
		{
			flag_same = 0;
		}
	}
	printf("flag_same = %d", flag_same);
	
	return 0;
}
