#include <stdio.h>
main()
{
	int i=1, n, m, sum=0;
	
	printf("합을 구할 첫번째 수 입력 : ");
	scanf("%d",&n);
	
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d",&m);
	
	i=n;
	
	while(i<=m)
	{
	sum=sum+i;
	i++;
	}
	printf("%d부터 %d까지의 합은 %d입니다\n", n, m, sum);
}
