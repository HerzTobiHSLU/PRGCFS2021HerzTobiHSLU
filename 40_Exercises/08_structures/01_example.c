#include <stdio.h>

#define FIRST_NAME_LENGTH 20
#define LAST_NAME_LENGTH 30
#define GRADE_NUM 6
#define NUM_STUDENTS 5

struct Student{
	char firstname[FIRST_NAME_LENGTH]; 
	char lastname[LAST_NAME_LENGTH]; 
	float grades [GRADE_NUM]; 
	float average;
};

int main (void) {

struct Student students[NUM_STUDENTS] = {
	[0].firstname = "tony", [0].lastname ="stark", [0].grades = { 6.0, 5.8, 5.9, 6.0, 5.9, 6.0 },
	[1].firstname = "peter", [1].lastname ="parker", [1].grades = { 4.5, 4.8, 5.8, 3.2, 5.9, 5.2 },
	[2].firstname = "bruce", [2].lastname ="banner", [2].grades = { 5.5, 2.8, 5.3, 4.8, 5.4, 4.5 },
	[3].firstname = "steve", [3].lastname ="rodgers", [3].grades = { 4.9, 3.9, 5.8, 2.3, 4.3, 5.4 },
	[4].firstname = "natasha", [4].lastname ="romanoff", [4].grades = { 5.3, 5.2, 5.1, 5.7, 4.9, 5.9 },
	};
	
	
	
	
	for( size_t j = 0; j <= 5; j++)
	{
		int i = 0;
		while (i<=5)
		{
		
		float average_s = average_s + students[j].grades[i] ;
		//printf("average: %f\n", average);
		i++;
		
		if (i>5){
			
			float average = average_s / 6;
			printf("Notendurchschnitt von %s %s ist: %f\n", students[j].firstname, students[j].lastname, average);
			
			average_s = 0;
			
			float Schnittabelle = Schnittabelle + average;
			if (j == 4) {
				float Schnitt = Schnittabelle /5;
				printf("Der Klassenschnitt ist %f\n", Schnitt);
			}
		}
	}
}	
	
	return 0;
}
