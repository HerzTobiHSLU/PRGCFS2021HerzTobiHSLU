#include <stdio.h>

int main () { 
	int sum = 0;
	int start = 1;
	int end = 10;
	
	for( int i = start; i<= end; i++ )
	{ 
		//Aufgabe 1
		//sum = sum + i; 
		
		//Aufgabe 2
		if(i%2==0){ 
		printf("Gerade Zahlen sind: %d\n",i);
		sum = sum + i;
		printf("Die summe der geraden Zahlen ist: %d\n",sum );
		}
	}
	
	//printf("The sum from %d to %d is equal to %d\n",
	//	start, end, sum);
	return 0;
}
