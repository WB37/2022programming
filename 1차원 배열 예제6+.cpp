#include <stdio.h>
main()
{
	int score[5];
	int i, min = 100;
	for(i=0; i<5; i++)
	{
		printf("%d�� �л��� ���α׷��� ������ �Է� : ",i+1);
		scanf("%d",&score[i]);
	}
	for(i=0; i<5; i++)
		if(min>score[i])
			min = score[i];
	printf("���� ���� : %d\n", min);
}
