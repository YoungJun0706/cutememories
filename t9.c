#include <stdio.h>
int main(){
	int ans;
	int time;
	printf("�Է��ϼ���");
	while(1)
	{
		scanf("%c", &ans);
		if(ans=='u')
		{
		time = time +10;
		printf("10�ʰ� �����Ǿ����ϴ�! ����");
	    }
		else if(ans=='d')
		{
			time = time -10;
			printf("10�ʰ�  ���ҵǾ��׿� �ФФ�");	
		}
		else if(ans=='s')
		{
			while(time>=0)
			{
			printf("%d��  %d��", time/60, time%60); 
			time--;
			sleep(1);
		    }
		}
		else if(time<0)
		{
	     time = 0;
	     printf("0�̸��� �����Դϴ�.");
		 } 
		
	 } 
	return 0;
} 
