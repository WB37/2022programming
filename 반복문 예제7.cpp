#include <stdio.h>
main()
{
	int dan, i=9;
	printf("�� ��?");
	scanf("%d",&dan);
	
	while(i>0)
	{
		printf("%d * %d = %d\n", dan, i, dan*i);
		i--;
	}
	
}
