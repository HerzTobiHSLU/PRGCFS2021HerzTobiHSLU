#include <stdio.h>
#define a
#define ok
#define left
#define right



int main () 
{	
	//get number
	printf("please enter number\n");
	int number = 0;
	int check = 0;
	scanf("%d", &number);
	printf("please check if real number, when correct, enter 1\n");
	scanf("%d", &check);
	
	if (check = 1 ); {
		printf("do you want to move number left or right?\nfor left, enter 1\nfor right, enter 2\n");
		int direction = 0;
		scanf("%d", &direction);
			
			if (direction = 1){
				printf("how many points do you want to move left\n");
				int places = 0;
				scanf("%d", &places);	
				int newnumber = number <<places;
				printf("%d moved bitwise left results in %d\n", number, newnumber);
			}
			
			else if (direction = 2){
				printf("how many points do you want to move right\n");
				int placesr = 0;
				scanf("%d", &placesr);	
				int newnumberr = number >>placesr;
				printf("%d moved bitwise right results in %d\n", number, newnumberr);
		}
	//else 
	//return 0;
	
	
	}
	
	
	
	return 0;
}	

