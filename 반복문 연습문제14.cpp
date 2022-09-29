#include <stdio.h>
main()
{
	int i, j, n;
	n=7;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
			printf("%3d", j);
		printf("\n");
	}
 } 
