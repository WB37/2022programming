#include <stdio.h>
main()
{
	int sum=0, i=0;
	while(1)
	{
		i++;
		if(i>10) break;
		if(i%5==0) continue;
		 sum=sum+i;
	}
	printf("sum = %d\n",sum);
}
