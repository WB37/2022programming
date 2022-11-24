#include <stdio.h>

void myPrint(char * str, int i)
{
	printf("[%d] %s\n", i, str);
///	printf("====================\n");
}

int add(int a, int b)
{
	int sum = a+b;
	printf("%d+%d=%d\n", a, b, sum);
	myPrint("결과", sum);
	return sum; 	
}

////입력으로 숫자 하나를 받아서 숫자 개수만큼 * 을 출력 
printStar(int n)
{
	for(int i=0;i<n;i++)
	{
		printf("*");		
	}
	printf("\n");
}
main()
{
	myPrint("10601 강윤서", 3);
	myPrint("서울로봇", 5);
	myPrint("시스템과", 7);

	printStar(add(3, 9));
	printStar(add(10, 13));
	printStar(add(6, 13));
} 

