#include <stdio.h>
int main(){
	int a[8];
	int i,k,p;
	printf("숫자를 입력하세요");
	scanf("%d %d %d %d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
	printf("확인할 숫자 입력하셈.");
	scanf("%d", &p);
	for(i=0; i<8; i++)
	{
		if(a[i]==p) 
		{
			k++;
		}
	}
	 printf("%d개 만큼 있습니다.", k-1);
	 return 0;
}
