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
	myPrint("���", sum);
	return sum; 	
}

////�Է����� ���� �ϳ��� �޾Ƽ� ���� ������ŭ * �� ��� 
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
	myPrint("10601 ������", 3);
	myPrint("����κ�", 5);
	myPrint("�ý��۰�", 7);

	printStar(add(3, 9));
	printStar(add(10, 13));
	printStar(add(6, 13));
} 

