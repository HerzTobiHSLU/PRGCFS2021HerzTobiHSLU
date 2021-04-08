#include <stdio.h>

// function declaration!
// float ComputeCircleArea(float radius);

void ComputeCircleArea(float radius, float *area);
	

int main()
{ 
	//float radius = 4.545;
	float myRadius = 4.545;
	float area = 10;
	ComputeCircleArea(myRadius, &area);
	printf("The area is %f\n", area);
	return 0;
}


// function implementation
void ComputeCircleArea(float radius, float *area){ 
	//return radius*radius*3.1415926535;
	*area = radius*radius*3.1415926535;
}

