#include <stdio.h>
main()
{
	int arr[5];
	int max, min, i;
	
	for(i=0;i<5;i++)
	{
		printf("�Է� : ");
		scanf("%d", &arr[i]);
	}
	
	max = min = arr[0];
	
	for(i=0;i<5;i++)
	{
		if(max<arr[i]) max = arr[i];
		if(min>arr[i]) min = arr[i];
	}
	
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);
}