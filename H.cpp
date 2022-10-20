#include <stdio.h>
main()
{
	int i, j, n, cnt=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=cnt;j++)
		{
		printf(" ");
		}
	printf("**\n");
	cnt++;					
	}
}

