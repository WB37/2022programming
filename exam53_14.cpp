#include <stdio.h>
#include <string.h>
main()
{
	char str[100];
	int i;
	gets(str);
	printf("str�� ���ڱ��� : %d\n", strlen(str));
	
	for(i=strlen(str)-1;i>=0;i--)
	printf("%c", str[i]);
}