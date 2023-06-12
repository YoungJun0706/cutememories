#include <stdio.h>
int main(){
	int ans;
	int time;
	printf("입력하세요");
	while(1)
	{
		scanf("%c", &ans);
		if(ans=='u')
		{
		time = time +10;
		printf("10초가 증가되었습니다! 유후");
	    }
		else if(ans=='d')
		{
			time = time -10;
			printf("10초가  감소되었네요 ㅠㅠㅠ");	
		}
		else if(ans=='s')
		{
			while(time>=0)
			{
			printf("%d분  %d초", time/60, time%60); 
			time--;
			sleep(1);
		    }
		}
		else if(time<0)
		{
	     time = 0;
	     printf("0미만은 지옥입니다.");
		 } 
		
	 } 
	return 0;
} 
