#include <stdio.h>
int main(){
	int a[8];
	int i,k,p;
	printf("���ڸ� �Է��ϼ���");
	scanf("%d %d %d %d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
	printf("Ȯ���� ���� �Է��ϼ�.");
	scanf("%d", &p);
	for(i=0; i<8; i++)
	{
		if(a[i]==p) 
		{
			k++;
		}
	}
	 printf("%d�� ��ŭ �ֽ��ϴ�.", k-1);
	 return 0;
}
