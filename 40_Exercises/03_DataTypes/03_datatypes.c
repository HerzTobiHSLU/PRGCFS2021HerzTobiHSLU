#include <stdio.h> //weist programmierbefehle library zu


int main()  //Top Level, definiert die Ausgabe des Programmes als integer
{ 

	printf("size of char: %ld\n", sizeof(char) ); //Printf sagt dem Programm, bilde auf terminal ab
	printf("size of uchar: %ld\n", sizeof(unsigned char) );
	printf("size of short: %ld\n", sizeof(short) );
	printf("size of int: %ld\n", sizeof(int) );
	printf("size of float: %ld\n", sizeof(float) );
	
	
	return 0;
}
