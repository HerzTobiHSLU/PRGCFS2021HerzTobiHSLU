#include <stdio.h>

int main () { 
	int sum = 0;
	int start = 1;
	int end = 10;
	
	for( int i = start; i<= end; i++ )
	{ 
		sum = sum + i;
	}
	
	printf("The sum from %d to %d is equal to %d\n",
		start, end, sum);
	return 0;
}
