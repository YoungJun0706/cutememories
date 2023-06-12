#include <stdio.h>
int main(){
	int time;
	printf("숫자를 입력하세요");
	scanf("%d", &time);
	printf("%d분  %d초", time/60, time%60); 
	return 0;
}




//100 100/60 = 1
//100%60 = 40
