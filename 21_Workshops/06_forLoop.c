#include <stdio.h>

int main () { 
	
	int sum = 0;
	int start = 1;
	int end = 10000;
	int max = 555;
	
	for( int i = start; i < end; i++)
	{ 
		
		sum = sum + i;
		if (sum > max)
		{
			printf("with max. sum %d, the sum from %d to %d is equal to %d", max, start, i, sum );	
		break;
	}
	}
	//printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	
		
	return 0;
}
