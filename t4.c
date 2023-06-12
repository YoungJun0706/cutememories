#include <stdio.h>
int main(){
	int i;
	int score;
	printf("숫자를입력하세요");
	scanf("%d", &score);
	for(i=1; i<=score; i++)
	{
		printf("%d", i);
	} 
	return 0;
}

