#include <stdio.h>
main()
{
	int arr[5], sum = 0, i;
	float avg;
	
	for(i=0; i<5; i++)
	{
		printf("%d라운드 점수 : ", i+1);
		scanf("%d", &arr[i]);
		sum = arr[i];
	}
	
	printf("\n총점은 %d점이며, 평균은 %f점 입니다.", sum, avg);
}
