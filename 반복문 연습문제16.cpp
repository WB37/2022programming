#include <stdio.h>
main()
{
	int i;
	int sum = 0;
	for(i=1;i<=3;i++)
	{
		if(i==2)
		continue;
		sum+=i;
	}
	printf("%d",sum);
}
