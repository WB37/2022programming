#include <stdio.h>
main()
{
	int i=1, n, m, sum=0;
	
	printf("���� ���� ù��° �� �Է� : ");
	scanf("%d",&n);
	
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&m);
	
	i=n;
	
	while(i<=m)
	{
	sum=sum+i;
	i++;
	}
	printf("%d���� %d������ ���� %d�Դϴ�\n", n, m, sum);
}
