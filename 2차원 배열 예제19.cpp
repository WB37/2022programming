#include <stdio.h>
main()
{
	char ani1[4][10] ={
	{'c', 'a', 't', '\0'},	
	{'h', 'o', 'r', 's', 'e', '\0'},
	{'d', 'o', 'g', '\0'},
	{'t', 'i', 'g', 'e', 'r', '\0'}
};
	char ani2[][10] = {"cat", "horse", "dog", "tiger"};
	int i, j;
	
	for(i=0;i<4;i++)
		for(j=0;j<10;j++)
		printf("%c", ani1[i][j]);
	printf("\n");
	for(i=0;i<4;i++)
		printf("%s ", ani2[i]);
}
