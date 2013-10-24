#include <stdio.h>
/* creating arrays */

int main()
{
	int n[ 10 ];
	int thread1,thread2;
	
	for (thread1 = 0; thread1 < 10; thread1++)
	{
		n[ thread1 ] = thread1 + 100;
		printf("thread1 id[%d] enters = %d\n",thread1,n[ thread1 ]);
	}
	for (thread2 = 0; thread2 < 5; thread2++)
	{
		n[ thread2 ] = thread2 + 100;
		printf("thread2 id[%d] enters = %d\n",thread2,n[ thread2 ]);
	}
	return 0;
}

