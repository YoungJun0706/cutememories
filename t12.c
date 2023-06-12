#include <stdio.h>
int main(){
	int a[5];
	printf("숫자를 입력하세요");
	scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);
	printf("%d %d %d %d %d", a[4],a[3],a[2],a[1],a[0]);
}
