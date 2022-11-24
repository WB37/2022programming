#include <stdio.h>
main()
{
	int length=0;
	int i=0;	
	char str[50];
	gets(str);
	
	for(i=0;str[i];i++)
		length += 1;
	printf("%d", length);	
} 
