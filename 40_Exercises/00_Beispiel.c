#include <stdio.h>

// function declaration!
float ComputeCircleArea(float radius);


int main()
{ 
	float radius = 4.545;
	float area = ComputeCircleArea(radius);
	printf("Fläche %f\n", area);
	return 0;
}


// function implementation
float ComputeCircleArea(float radius){ 
	return radius*radius*3.1415926535;
	
}

