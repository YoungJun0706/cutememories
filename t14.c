#include <stdio.h>
int  main()
{
	int su[5], i, ii, temp;
    printf("정수를 입력해주세요");
    scanf("%d %d %d %d %d", &su[0],&su[1],&su[2],&su[3],&su[4]); 
	for(i = 0; i < 4; i++)
	{
		for(ii = 0; (ii + i) < 4; ii++)
		{
			if(su[ii] > su[ii + 1])
			{
				temp = su[ii];
				su[ii] = su[ii + 1];
				su[ii + 1] = temp;
			}
		}
	}

	for(i = 0; i < 5; i++) printf("%d\t", su[i]);
}
