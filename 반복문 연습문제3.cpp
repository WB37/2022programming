#include <stdio.h>
main()
{
	int n, a;
	
	printf("4자리수 입력 : ");
	scanf("%d", &n);
	
	do{
		a=n%10;
		printf("%d",a);	
		n=n/10;
	}while(n>0);
}
