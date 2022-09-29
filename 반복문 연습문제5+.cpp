#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	srand(time(NULL));
	for(int i=1;i<=5;i++);
	printf("%d\n", rand());
}
