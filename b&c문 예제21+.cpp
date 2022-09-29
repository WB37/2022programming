#include <stdio.h>
main()
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Be happy~\n");
			if(j==1)
			break; 
		}
	}
}
