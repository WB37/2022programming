#include <stdio.h>
main()
{
	char mark[5][5] = {0};
	int i, j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j||j==4-i) mark[i][j] = 'X'; /// 4-jµµ °¡´É 
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%2c", mark[i][j]);
		}
		printf("\n");
	}
}
