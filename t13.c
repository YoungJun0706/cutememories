#include <stdio.h>
int main(){
	int a[5];
	int i; 
	printf("숫자를 입력하세요");
	scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]); 
	for(i=0; i<5; i++){
	if(a[i]%2==0)
	{
		printf("%d는 짝수랍니다^^", a[i]); 
	 } 
	 else
	 {
	 	printf("%d는 홀수랍니다^^", a[i]);
	 }
	}
}
