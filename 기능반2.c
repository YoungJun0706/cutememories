#include <stdio.h>
int main(){
	char name[10];
	printf("이름을 입력해주세요");
	scanf("%s", &name);
	printf("%s씨 안녕하세요", name);
	return 0;
} 
