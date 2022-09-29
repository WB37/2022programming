#include <stdio.h>
main()
{
	int i, num=1;
	for(i=1; ;i++)
	{
		num=num*i;
		if(i>5)
			break;
	}
	printf("%d",num);
}
