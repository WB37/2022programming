#include <stdio.h>
main()
{
	int sum=0, n;
	
	printf("정수 입력(0이면 종료) : ");
	
	do
	{
		scanf("%d",&n); 
		sum=sum+n;
	} while(n!=0);
	printf("합 : %d", sum);
}
