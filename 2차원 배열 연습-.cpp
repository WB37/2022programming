#include <stdio.h>
main()
{
	int num[3][4] = {7, 0};
	int i, j;
	
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
		printf("%d ", num[i][j]);
}
