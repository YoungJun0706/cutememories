#include <stdio.h>
int main(){
	int a[5], b[5];
	int sum, i;
    printf("숫자를 입력해주세요");
    scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);	
    printf("숫자를 5개 더 입력해주세요");
    scanf("%d %d %d %d %d", &b[0],&b[1],&b[2],&b[3],&b[4]);
    for(i=0; i<5; i++)
    {
    	if(a[i]==b[i])
    	{
    		sum=1;
		}
		else
		{
			sum=0;
		}
		if(sum==1)
		{
			printf("맞아용");
		}
		else
		{
			printf("틀렸어용~");
		 } 
	}
		


}
