#include <stdio.h>
main()
{
	char str1[6] = {'H','e','l','l','o','\0'};
	char str2[] = "world!";
	int i;
	
	printf("%s\n", str1);
	for(i=0;str2[i]!='\0';i++)
		printf("%c",str2[i]);
//	printf("%s\n", str2);

	printf("\nstr1�� ũ�� : %d\n",sizeof(str1));
	printf("str�� ũ�� : %d\n", sizeof(str2));
	str2[5] = '~';
	printf("%s\n", str2);
}
