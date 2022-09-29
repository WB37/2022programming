#include <stdio.h>
main()
{
	int n = 1, sum = 0;
	
	while(1)
	{
		n++;
		if(sum>=100) break;
		sum=sum+n;
	} 
	printf("sum=%d, n = %d\n", sum, n);
}
