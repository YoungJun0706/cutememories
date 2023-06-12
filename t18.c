#include <stdio.h>
int main(){
	int a[8];
	printf("숫자를 입력하세요");
	scanf("%d %d %d %d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
	printf("%d %d %d", a[2], a[3], a[6]); 
	return 0;
}
