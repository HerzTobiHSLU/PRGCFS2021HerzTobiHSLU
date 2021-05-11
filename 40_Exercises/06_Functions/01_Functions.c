#include <stdio.h>
#include <stdlib.h>

//const int NUM_VALUES = 2;

int nubk (int n, int k) { 
	int i, x=1;
	if((k==0)&&(n>=0))
		return 1;
	else if (2*k>n)
		return nubk(n,n-k);
	else if((k>=1)&&(k<=n)){ 
		for(i=1;i<=k;i++) {
			x*=n-i+1;
			x/=i;
			}
		return x;
		}
	}
		
	
int main(int argc, char *argv[]) {

	//int n = atoi(argv[1]);
	//int k = atoi(argv[2]);
	int n = 100;
	int k = 10;
	printf("Das Ergebnis von n=%d über k=%d ist %d\n", n, k, nubk(n,k));
	return 0;
	}
