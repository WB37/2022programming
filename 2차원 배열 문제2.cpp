#include <stdio.h>
main()
{
	int arr[5], sum = 0, i;
	float avg;
	
	for(i=0; i<5; i++)
	{
		printf("%d���� ���� : ", i+1);
		scanf("%d", &arr[i]);
		sum = arr[i];
	}
	
	printf("\n������ %d���̸�, ����� %f�� �Դϴ�.", sum, avg);
}
