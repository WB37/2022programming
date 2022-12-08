#include <stdio.h>

Recusive(int count)
{
	printf("%d ", count);
	
	if(count > 0)
	{
		Recusive(count-1);	
	}
	
	printf("*");
}

int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num * fact(num-1);		
	}
}

main()
{
	int num;
	printf("숫자 입력 : ");
	scanf("%d", &num);
	
	printf("%d != %d", num, fact(num)); 
}
